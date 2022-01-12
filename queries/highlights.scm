(comment) @comment

[(null) (true) (false)] @constant.builtin

(number) @number
(unit) @keyword
(string) @string
(multiline_string) @string
(string (escape_sequence) @string.escape)
(unquoted_string) @string

[ "url"
  "file"
  "classpath"
  "required"
] @keyword

(include "include" @include)

(substitution ["${" "${?" "}"] @punctuation.special)
(substitution (_) @field)

(pair [":" "=" "+=" ] @operator)
(pair key: (_) @field)

[
 "("
 ")"
 "["
 "]"
 "{"
 "}"
]  @punctuation.bracket

[ "," ] @punctuation.delimiter

