const json = require("tree-sitter-json/grammar");

module.exports = grammar(json, {
  name: 'hocon',
  
  extras: $ => [
    /\s/,
    $.comment
  ],

  rules: {
    comment: $ => token(choice(
      seq('//', /.*/),
      seq('#', /.*/),
    )),

    document: ($, original) => choice(original, separated($.pair)),

    pair: $ => seq(
      choice($.string, $.number, $.unquoted_string),
      choice(
        seq($._separator, $._value),
        $.object
      )
    ),

    object: $ => seq(
      "{", separated($.pair), "}"
    ),

    array: $ => seq(
      "[", separated($._value), "]"
    ),

    string: $ => choice(
      seq('"', '"'),
      seq('"', $._string_content, '"')
    ),

    _string_content: $ => repeat1(choice(
      token.immediate(/[^\\"\n]+/),
      $.escape_sequence
    )),


    _separator: $ => choice(':', '='),

    _value: ($, original) => choice(
      original,
      $.unquoted_value,
      $.multiline_string,
    ),

    unquoted_value: $ => repeat1(choice($.unquoted_string, $.substitution)),

    unquoted_string: $ => /[a-zA-Z_]([^$:=,+#`^?!?*&"\{\}\[\]\\\n\/]|\/[^$:=,+#`^?!?*&"\{\}\[\]\\\n\/])*/,

    multiline_string: $ => seq('"""', token.immediate(/([^"]|"[^"]|""[^"])*"""/)),

    substitution: $ => seq(
      choice('${?', '${'),
      $.unquoted_string,
      '}'
    ),
      

    escape_sequence: $ => token.immediate(seq(
      '\\',
      /(\"|\\|\/|b|f|n|r|t|u)/
    )),

  }
});

function separated(rule) {
  return optional(seq(
    rule, 
    repeat(seq(choice(',', '\n'), rule)),
    optional(choice(',', '\n'))
  ))
}

