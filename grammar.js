const json = require("tree-sitter-json/grammar");

module.exports = grammar(json, {
  name: 'hocon',

  extras: $ => [
    /\s/,
    $.comment
  ],
  
  supertypes: _ => [ ],

  rules: {
    comment: _ => token(choice(
      seq('//', /.*/),
      seq('#', /.*/),
    )),

    document: $ => choice(
      $.array, 
      $.object, 
      choice(commaOrNewLineSeparated(choice($.include, $.pair)))
    ),

    object: $ => seq("{", commaOrNewLineSeparated(choice($.include, $.pair)), "}"),


    pair: $ => seq(
      $.path,
      $.value
    ),

    path: $ => choice(repeat1(choice($.string, $.unquoted_path)), $.number),

    value: $ => choice(
      seq($._pair_separator, $._value),
      $.object
    ),

    _pair_separator: _ => choice(':', '=', '+='),

    array: $ => seq(
      "[", commaOrNewLineSeparated($._value), "]"
    ),

    _value: ($, original) => repeat1(choice(
      original,
      seq($.number, $.unit),
      $.unquoted_string, 
      $.multiline_string,
      $.substitution,
    )),

    string: $ => choice(
      seq('"', '"'),
      seq('"', $._string_content, '"')
    ),

    _string_content: $ => repeat1(choice(
      token.immediate(/[^\\"\n]+/),
      $.escape_sequence
    )),

    unquoted_string: _ => {
      const reserved_symbols = [
        '$', ':', '=', ',', '+',
        '#', '`', '^', '?', '!',
        '?', '*', '&', '"', '\\{',
        '\\}', '\\[', '\\]', '\\\\', '\\n', '/'
      ]
      const allowed_symbol = '[^' + reserved_symbols.join('') + ']'

      // Sequence of allowed symbols. This sequence can contain single
      // forward slash (/) but should not contain two continuos forward slashes
      // since // is a comment start
      const rest_symbols = `(${allowed_symbol}|/${allowed_symbol})*`
      const first_symbol = '[a-zA-Z_.]'

      return new RegExp(first_symbol + rest_symbols)
    },

    unquoted_path: _ => {
      const reserved_symbols = [
        '$', ':', '=', ',', '+',
        '#', '`', '^', '?', '!',
        '?', '*', '&', '"', '\\{',
        '\\}', '\\[', '\\]', '\\\\', '\\n', '/', '.'
      ]
      const allowed_symbol = '[^' + reserved_symbols.join('') + ']'
      const allowed_symbol_except = symbol => '[^' + [...reserved_symbols, symbol].join('') + ']'

      // Sequence of allowed symbols. This sequence can contain single
      // forward slash (/) but should not contain two continuos forward slashes
      // since // is a comment start
      const rest_symbols = `(${allowed_symbol}|/${allowed_symbol})*`

      // Unquoted path can contail only allowed symbols and singe forward slash.
      // It can not contail two continuos forward slashes since // is a comment start.
      // Unquoted path can not begin with word 'include' followed by a space character.
      const unquoted_path = new RegExp(
        '(i|in|inc|incl|inclu|includ|' +
          '(i|in|inc|incl|inclu|ilclud)/|' +
          '(i|in|inc|incl|inclu|includ)/' + allowed_symbol + rest_symbols + '|' +
          '(' + [
              '[0-9a-hj-zA-Z_]',
              `i${allowed_symbol_except('n')}`,
              `in${allowed_symbol_except('c')}`,
              `inc${allowed_symbol_except('l')}`,
              `incl${allowed_symbol_except('u')}`,
              `inclu${allowed_symbol_except('d')}`,
              `includ${allowed_symbol_except('e')}`,
              `include${allowed_symbol_except('\\s')}`,
          ].join('|') + ')' + rest_symbols  +
        ')'
      )
      return prec.right(separated(unquoted_path, token.immediate('.')))
    },


    multiline_string: _ => seq('"""', token.immediate(/([^"]|"[^"]|""[^"])*"""/)),

    escape_sequence: _ => token.immediate(seq(
      '\\',
      /(\"|\\|\/|b|f|n|r|t|u)/
    )),

    substitution: $ => seq(
      choice('${?', '${'),
      $.path,
      '}'
    ),

    include: $ => seq(
      'include',
      choice(
        seq('required', '(', $._resource_name, ')'),
        $._resource_name
      )
    ),

    _resource_name: $ => choice(
      $.string,
      seq(choice('url', 'file', 'classpath'), '(', $.string, ')')
    ),

    _punctuation: _ => choice('.', ','),

    unit: _ => choice(
      // Duration format
      'ns', 'nano', 'nanos', 'nanosecond', 'nanoseconds',
      'us', 'micro', 'micros', 'microsecond', 'microseconds',
      'ms', 'milli', 'millis', 'millisecond', 'milliseconds',
      's', 'second', 'seconds',
      'm', 'minute', 'minutes',
      'h', 'hour', 'hours',
      'd', 'day', 'days',

      // Period Format
      'd', 'day', 'days',
      'w', 'week', 'weeks',
      'm', 'mo', 'month', 'months' ,
      'y', 'year', 'years',

      // Size in bytes format
      'B', 'b', 'byte', 'bytes',

      'kB', 'kilobyte', 'kilobytes',
      'MB', 'megabyte', 'megabytes',
      'GB', 'gigabyte', 'gigabytes',
      'TB', 'terabyte', 'terabytes',
      'PB', 'petabyte', 'petabytes',
      'EB', 'exabyte', 'exabytes',
      'ZB', 'zettabyte', 'zettabytes',
      'YB', 'yottabyte', 'yottabytes',

      'K', 'k', 'Ki', 'KiB', 'kibibyte', 'kibibytes',
      'M', 'm', 'Mi', 'MiB', 'mebibyte', 'mebibytes',
      'G', 'g', 'Gi', 'GiB', 'gibibyte', 'gibibytes',
      'T', 't', 'Ti', 'TiB', 'tebibyte', 'tebibytes',
      'P', 'p', 'Pi', 'PiB', 'pebibyte', 'pebibytes',
      'E', 'e', 'Ei', 'EiB', 'exbibyte', 'exbibytes',
      'Z', 'z', 'Zi', 'ZiB', 'zebibyte', 'zebibytes',
      'Y', 'y', 'Yi', 'YiB', 'yobibyte', 'yobibytes',
    ),

  }
});

function commaOrNewLineSeparated(rule) {
  const separator = choice(',', '\n')
  return optional(separated(rule, separator))
}

function separated(rule, separator) {
  return seq(
    rule,
    repeat(seq(separator, rule)),
    optional(separator)
  )
}
