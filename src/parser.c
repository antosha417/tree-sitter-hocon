#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 81
#define LARGE_STATE_COUNT 10
#define SYMBOL_COUNT 36
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_COMMA = 1,
  anon_sym_LF = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
  anon_sym_DQUOTE = 7,
  aux_sym_string_content_token1 = 8,
  sym_escape_sequence = 9,
  sym_number = 10,
  sym_true = 11,
  sym_false = 12,
  sym_null = 13,
  sym_comment = 14,
  anon_sym_COLON = 15,
  anon_sym_EQ = 16,
  sym_unquoted_string = 17,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 18,
  aux_sym_multiline_string_token1 = 19,
  anon_sym_DOLLAR_LBRACE_QMARK = 20,
  anon_sym_DOLLAR_LBRACE = 21,
  sym_document = 22,
  sym__value = 23,
  sym_object = 24,
  sym_pair = 25,
  sym_array = 26,
  sym_string = 27,
  aux_sym__string_content = 28,
  sym__separator = 29,
  sym_unquoted_value = 30,
  sym_multiline_string = 31,
  sym_substitution = 32,
  aux_sym_document_repeat1 = 33,
  aux_sym_array_repeat1 = 34,
  aux_sym_unquoted_value_repeat1 = 35,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COMMA] = ",",
  [anon_sym_LF] = "\n",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_content_token1] = "string_content_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_number] = "number",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_null] = "null",
  [sym_comment] = "comment",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [sym_unquoted_string] = "unquoted_string",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [aux_sym_multiline_string_token1] = "multiline_string_token1",
  [anon_sym_DOLLAR_LBRACE_QMARK] = "${\?",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [sym_document] = "document",
  [sym__value] = "_value",
  [sym_object] = "object",
  [sym_pair] = "pair",
  [sym_array] = "array",
  [sym_string] = "string",
  [aux_sym__string_content] = "_string_content",
  [sym__separator] = "_separator",
  [sym_unquoted_value] = "unquoted_value",
  [sym_multiline_string] = "multiline_string",
  [sym_substitution] = "substitution",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_unquoted_value_repeat1] = "unquoted_value_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_content_token1] = aux_sym_string_content_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_number] = sym_number,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_null] = sym_null,
  [sym_comment] = sym_comment,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_unquoted_string] = sym_unquoted_string,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [aux_sym_multiline_string_token1] = aux_sym_multiline_string_token1,
  [anon_sym_DOLLAR_LBRACE_QMARK] = anon_sym_DOLLAR_LBRACE_QMARK,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [sym_document] = sym_document,
  [sym__value] = sym__value,
  [sym_object] = sym_object,
  [sym_pair] = sym_pair,
  [sym_array] = sym_array,
  [sym_string] = sym_string,
  [aux_sym__string_content] = aux_sym__string_content,
  [sym__separator] = sym__separator,
  [sym_unquoted_value] = sym_unquoted_value,
  [sym_multiline_string] = sym_multiline_string,
  [sym_substitution] = sym_substitution,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_unquoted_value_repeat1] = aux_sym_unquoted_value_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_content_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_unquoted_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_multiline_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOLLAR_LBRACE_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__string_content] = {
    .visible = false,
    .named = false,
  },
  [sym__separator] = {
    .visible = false,
    .named = true,
  },
  [sym_unquoted_value] = {
    .visible = true,
    .named = true,
  },
  [sym_multiline_string] = {
    .visible = true,
    .named = true,
  },
  [sym_substitution] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unquoted_value_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_unquoted_string_character_set_1(int32_t c) {
  return (c < ':'
    ? (c < '&'
      ? (c < '\n'
        ? c == 0
        : (c <= '\n' || (c >= '!' && c <= '$')))
      : (c <= '&' || (c < '/'
        ? (c >= '*' && c <= ',')
        : c <= '/')))
    : (c <= ':' || (c < '`'
      ? (c < '?'
        ? c == '='
        : (c <= '?' || (c >= '[' && c <= '^')))
      : (c <= '`' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym_unquoted_string_character_set_2(int32_t c) {
  return (c < '='
    ? (c < '&'
      ? (c < '\n'
        ? c == 0
        : (c <= '\n' || (c >= '!' && c <= '$')))
      : (c <= '&' || (c < ':'
        ? (c >= '*' && c <= ',')
        : c <= ':')))
    : (c <= '=' || (c < '`'
      ? (c < '['
        ? c == '?'
        : c <= '^')
      : (c <= '`' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(23);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '#') ADVANCE(51);
      if (lookahead == '$') ADVANCE(11);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(10);
      if (lookahead == ',') ADVANCE(24);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '0') ADVANCE(37);
      if (lookahead == ':') ADVANCE(52);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == '[') ADVANCE(28);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == ']') ADVANCE(29);
      if (lookahead == 'f') ADVANCE(54);
      if (lookahead == 'n') ADVANCE(63);
      if (lookahead == 't') ADVANCE(60);
      if (lookahead == '{') ADVANCE(26);
      if (lookahead == '}') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(65);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '#') ADVANCE(51);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(8);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(66);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(51);
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(38);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 11:
      if (lookahead == '{') ADVANCE(69);
      END_STATE();
    case 12:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 13:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(41);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(42);
      END_STATE();
    case 15:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 19:
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(64);
      END_STATE();
    case 20:
      if (eof) ADVANCE(23);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '#') ADVANCE(51);
      if (lookahead == '$') ADVANCE(11);
      if (lookahead == ',') ADVANCE(24);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ']') ADVANCE(29);
      if (lookahead == '}') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 21:
      if (eof) ADVANCE(23);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '#') ADVANCE(51);
      if (lookahead == '$') ADVANCE(11);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(10);
      if (lookahead == ',') ADVANCE(24);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '0') ADVANCE(37);
      if (lookahead == ':') ADVANCE(52);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == '[') ADVANCE(28);
      if (lookahead == ']') ADVANCE(29);
      if (lookahead == 'f') ADVANCE(54);
      if (lookahead == 'n') ADVANCE(63);
      if (lookahead == 't') ADVANCE(60);
      if (lookahead == '{') ADVANCE(26);
      if (lookahead == '}') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 22:
      if (eof) ADVANCE(23);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '#') ADVANCE(51);
      if (lookahead == '$') ADVANCE(11);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(10);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '0') ADVANCE(37);
      if (lookahead == ':') ADVANCE(52);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == '{') ADVANCE(26);
      if (lookahead == '}') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(2);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(35);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(35);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(13);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(12);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(14);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(18);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == '/') ADVANCE(19);
      if (!sym_unquoted_string_character_set_2(lookahead)) ADVANCE(64);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == '/') ADVANCE(19);
      if (!sym_unquoted_string_character_set_2(lookahead)) ADVANCE(64);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_null);
      if (lookahead == '/') ADVANCE(19);
      if (!sym_unquoted_string_character_set_2(lookahead)) ADVANCE(64);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '"') ADVANCE(67);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '"') ADVANCE(48);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '"') ADVANCE(49);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == 'a') ADVANCE(57);
      if (!sym_unquoted_string_character_set_2(lookahead)) ADVANCE(64);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(45);
      if (!sym_unquoted_string_character_set_2(lookahead)) ADVANCE(64);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(46);
      if (!sym_unquoted_string_character_set_2(lookahead)) ADVANCE(64);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == 'l') ADVANCE(61);
      if (!sym_unquoted_string_character_set_2(lookahead)) ADVANCE(64);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == 'l') ADVANCE(47);
      if (!sym_unquoted_string_character_set_2(lookahead)) ADVANCE(64);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == 'l') ADVANCE(58);
      if (!sym_unquoted_string_character_set_2(lookahead)) ADVANCE(64);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == 'r') ADVANCE(62);
      if (!sym_unquoted_string_character_set_2(lookahead)) ADVANCE(64);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == 's') ADVANCE(56);
      if (!sym_unquoted_string_character_set_2(lookahead)) ADVANCE(64);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == 'u') ADVANCE(55);
      if (!sym_unquoted_string_character_set_2(lookahead)) ADVANCE(64);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == 'u') ADVANCE(59);
      if (!sym_unquoted_string_character_set_2(lookahead)) ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(19);
      if (!sym_unquoted_string_character_set_2(lookahead)) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE_QMARK);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      if (lookahead == '?') ADVANCE(68);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 20},
  [11] = {.lex_state = 20},
  [12] = {.lex_state = 22},
  [13] = {.lex_state = 20},
  [14] = {.lex_state = 22},
  [15] = {.lex_state = 22},
  [16] = {.lex_state = 22},
  [17] = {.lex_state = 22},
  [18] = {.lex_state = 22},
  [19] = {.lex_state = 22},
  [20] = {.lex_state = 22},
  [21] = {.lex_state = 22},
  [22] = {.lex_state = 22},
  [23] = {.lex_state = 22},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 20},
  [26] = {.lex_state = 20},
  [27] = {.lex_state = 20},
  [28] = {.lex_state = 20},
  [29] = {.lex_state = 20},
  [30] = {.lex_state = 20},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 20},
  [33] = {.lex_state = 20},
  [34] = {.lex_state = 20},
  [35] = {.lex_state = 20},
  [36] = {.lex_state = 20},
  [37] = {.lex_state = 20},
  [38] = {.lex_state = 22},
  [39] = {.lex_state = 20},
  [40] = {.lex_state = 20},
  [41] = {.lex_state = 20},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 20},
  [44] = {.lex_state = 20},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 20},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 20},
  [49] = {.lex_state = 20},
  [50] = {.lex_state = 20},
  [51] = {.lex_state = 20},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 20},
  [56] = {.lex_state = 20},
  [57] = {.lex_state = 20},
  [58] = {.lex_state = 20},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 22},
  [61] = {.lex_state = 20},
  [62] = {.lex_state = 20},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 22},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 22},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_unquoted_string] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE_QMARK] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(75),
    [sym__value] = STATE(68),
    [sym_object] = STATE(79),
    [sym_pair] = STATE(56),
    [sym_array] = STATE(79),
    [sym_string] = STATE(24),
    [sym_unquoted_value] = STATE(79),
    [sym_multiline_string] = STATE(79),
    [sym_substitution] = STATE(14),
    [aux_sym_unquoted_value_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_number] = ACTIONS(13),
    [sym_true] = ACTIONS(15),
    [sym_false] = ACTIONS(15),
    [sym_null] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [sym_unquoted_string] = ACTIONS(17),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(19),
    [anon_sym_DOLLAR_LBRACE_QMARK] = ACTIONS(21),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(23),
  },
  [2] = {
    [sym__value] = STATE(62),
    [sym_object] = STATE(37),
    [sym_array] = STATE(37),
    [sym_string] = STATE(37),
    [sym_unquoted_value] = STATE(37),
    [sym_multiline_string] = STATE(37),
    [sym_substitution] = STATE(10),
    [aux_sym_unquoted_value_repeat1] = STATE(10),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_number] = ACTIONS(33),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_null] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [sym_unquoted_string] = ACTIONS(37),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(39),
    [anon_sym_DOLLAR_LBRACE_QMARK] = ACTIONS(41),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(43),
  },
  [3] = {
    [sym__value] = STATE(50),
    [sym_object] = STATE(37),
    [sym_array] = STATE(37),
    [sym_string] = STATE(37),
    [sym_unquoted_value] = STATE(37),
    [sym_multiline_string] = STATE(37),
    [sym_substitution] = STATE(10),
    [aux_sym_unquoted_value_repeat1] = STATE(10),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_number] = ACTIONS(33),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_null] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [sym_unquoted_string] = ACTIONS(37),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(39),
    [anon_sym_DOLLAR_LBRACE_QMARK] = ACTIONS(41),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(43),
  },
  [4] = {
    [sym__value] = STATE(62),
    [sym_object] = STATE(37),
    [sym_array] = STATE(37),
    [sym_string] = STATE(37),
    [sym_unquoted_value] = STATE(37),
    [sym_multiline_string] = STATE(37),
    [sym_substitution] = STATE(10),
    [aux_sym_unquoted_value_repeat1] = STATE(10),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_number] = ACTIONS(33),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_null] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [sym_unquoted_string] = ACTIONS(37),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(39),
    [anon_sym_DOLLAR_LBRACE_QMARK] = ACTIONS(41),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(43),
  },
  [5] = {
    [sym__value] = STATE(62),
    [sym_object] = STATE(37),
    [sym_array] = STATE(37),
    [sym_string] = STATE(37),
    [sym_unquoted_value] = STATE(37),
    [sym_multiline_string] = STATE(37),
    [sym_substitution] = STATE(10),
    [aux_sym_unquoted_value_repeat1] = STATE(10),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_number] = ACTIONS(33),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_null] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [sym_unquoted_string] = ACTIONS(37),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(39),
    [anon_sym_DOLLAR_LBRACE_QMARK] = ACTIONS(41),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(43),
  },
  [6] = {
    [sym__value] = STATE(62),
    [sym_object] = STATE(37),
    [sym_array] = STATE(37),
    [sym_string] = STATE(37),
    [sym_unquoted_value] = STATE(37),
    [sym_multiline_string] = STATE(37),
    [sym_substitution] = STATE(10),
    [aux_sym_unquoted_value_repeat1] = STATE(10),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_number] = ACTIONS(33),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_null] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [sym_unquoted_string] = ACTIONS(37),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(39),
    [anon_sym_DOLLAR_LBRACE_QMARK] = ACTIONS(41),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(43),
  },
  [7] = {
    [sym__value] = STATE(48),
    [sym_object] = STATE(37),
    [sym_array] = STATE(37),
    [sym_string] = STATE(37),
    [sym_unquoted_value] = STATE(37),
    [sym_multiline_string] = STATE(37),
    [sym_substitution] = STATE(10),
    [aux_sym_unquoted_value_repeat1] = STATE(10),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_number] = ACTIONS(33),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_null] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [sym_unquoted_string] = ACTIONS(37),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(39),
    [anon_sym_DOLLAR_LBRACE_QMARK] = ACTIONS(41),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(43),
  },
  [8] = {
    [sym__value] = STATE(51),
    [sym_object] = STATE(37),
    [sym_array] = STATE(37),
    [sym_string] = STATE(37),
    [sym_unquoted_value] = STATE(37),
    [sym_multiline_string] = STATE(37),
    [sym_substitution] = STATE(10),
    [aux_sym_unquoted_value_repeat1] = STATE(10),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_number] = ACTIONS(33),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_null] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [sym_unquoted_string] = ACTIONS(37),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(39),
    [anon_sym_DOLLAR_LBRACE_QMARK] = ACTIONS(41),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(43),
  },
  [9] = {
    [sym__value] = STATE(62),
    [sym_object] = STATE(37),
    [sym_array] = STATE(37),
    [sym_string] = STATE(37),
    [sym_unquoted_value] = STATE(37),
    [sym_multiline_string] = STATE(37),
    [sym_substitution] = STATE(10),
    [aux_sym_unquoted_value_repeat1] = STATE(10),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_number] = ACTIONS(33),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_null] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [sym_unquoted_string] = ACTIONS(37),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(39),
    [anon_sym_DOLLAR_LBRACE_QMARK] = ACTIONS(41),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(43),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym_unquoted_string,
    ACTIONS(43), 2,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(55), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(11), 2,
      sym_substitution,
      aux_sym_unquoted_value_repeat1,
    ACTIONS(57), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [24] = 6,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_unquoted_string,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(70), 2,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
    STATE(11), 2,
      sym_substitution,
      aux_sym_unquoted_value_repeat1,
    ACTIONS(65), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [48] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(77), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(8), 1,
      sym__separator,
    STATE(61), 1,
      sym_object,
    ACTIONS(75), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(73), 3,
      ts_builtin_sym_end,
      sym_unquoted_string,
      anon_sym_DOLLAR_LBRACE_QMARK,
  [73] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(81), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_unquoted_string,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
  [89] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DOLLAR_LBRACE_QMARK,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(83), 1,
      sym_unquoted_string,
    STATE(21), 2,
      sym_substitution,
      aux_sym_unquoted_value_repeat1,
  [109] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    STATE(31), 1,
      sym_string,
    STATE(57), 1,
      sym_pair,
    ACTIONS(89), 2,
      sym_number,
      sym_unquoted_string,
  [129] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    STATE(31), 1,
      sym_string,
    STATE(41), 1,
      sym_pair,
    ACTIONS(89), 2,
      sym_number,
      sym_unquoted_string,
  [149] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      sym_string,
    STATE(49), 1,
      sym_pair,
    ACTIONS(89), 2,
      sym_number,
      sym_unquoted_string,
  [169] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      sym_string,
    STATE(41), 1,
      sym_pair,
    ACTIONS(89), 2,
      sym_number,
      sym_unquoted_string,
  [189] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      sym_string,
    STATE(41), 1,
      sym_pair,
    ACTIONS(89), 2,
      sym_number,
      sym_unquoted_string,
  [209] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    STATE(31), 1,
      sym_string,
    STATE(41), 1,
      sym_pair,
    ACTIONS(89), 2,
      sym_number,
      sym_unquoted_string,
  [229] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(101), 1,
      sym_unquoted_string,
    ACTIONS(104), 1,
      anon_sym_DOLLAR_LBRACE_QMARK,
    ACTIONS(107), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(21), 2,
      sym_substitution,
      aux_sym_unquoted_value_repeat1,
  [249] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      sym_string,
    STATE(41), 1,
      sym_pair,
    ACTIONS(89), 2,
      sym_number,
      sym_unquoted_string,
  [269] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(112), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      sym_string,
    STATE(41), 1,
      sym_pair,
    ACTIONS(89), 2,
      sym_number,
      sym_unquoted_string,
  [289] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      sym__separator,
    STATE(61), 1,
      sym_object,
    ACTIONS(75), 2,
      anon_sym_COLON,
      anon_sym_EQ,
  [309] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(116), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(118), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [322] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(120), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(122), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [335] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(124), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(126), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [348] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(128), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(130), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [361] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(132), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(134), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [374] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(136), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(138), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [387] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    STATE(8), 1,
      sym__separator,
    STATE(61), 1,
      sym_object,
    ACTIONS(75), 2,
      anon_sym_COLON,
      anon_sym_EQ,
  [404] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(140), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(142), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [417] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(144), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(146), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [430] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(148), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(150), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [443] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(152), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(154), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [456] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(156), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(158), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [469] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(160), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [482] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    STATE(31), 1,
      sym_string,
    STATE(41), 1,
      sym_pair,
    ACTIONS(89), 2,
      sym_number,
      sym_unquoted_string,
  [499] = 6,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
    ACTIONS(164), 1,
      anon_sym_COMMA,
    ACTIONS(167), 1,
      anon_sym_LF,
    ACTIONS(170), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      aux_sym_document_repeat1,
  [518] = 5,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(172), 1,
      anon_sym_COMMA,
    ACTIONS(174), 1,
      anon_sym_LF,
    STATE(39), 1,
      aux_sym_document_repeat1,
  [534] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(162), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(170), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [546] = 5,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_DQUOTE,
    ACTIONS(178), 1,
      aux_sym_string_content_token1,
    ACTIONS(180), 1,
      sym_escape_sequence,
    STATE(59), 1,
      aux_sym__string_content,
  [562] = 5,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(184), 1,
      anon_sym_LF,
    ACTIONS(186), 1,
      anon_sym_RBRACK,
    STATE(46), 1,
      aux_sym_array_repeat1,
  [578] = 5,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_COMMA,
    ACTIONS(190), 1,
      anon_sym_LF,
    ACTIONS(192), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      aux_sym_document_repeat1,
  [594] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_EQ,
  [604] = 5,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_COMMA,
    ACTIONS(197), 1,
      anon_sym_LF,
    ACTIONS(200), 1,
      anon_sym_RBRACK,
    STATE(46), 1,
      aux_sym_array_repeat1,
  [620] = 5,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      aux_sym_string_content_token1,
    ACTIONS(206), 1,
      sym_escape_sequence,
    STATE(53), 1,
      aux_sym__string_content,
  [636] = 5,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_COMMA,
    ACTIONS(210), 1,
      anon_sym_LF,
    ACTIONS(212), 1,
      anon_sym_RBRACK,
    STATE(43), 1,
      aux_sym_array_repeat1,
  [652] = 5,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_COMMA,
    ACTIONS(216), 1,
      anon_sym_LF,
    ACTIONS(218), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      aux_sym_document_repeat1,
  [668] = 5,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_COMMA,
    ACTIONS(222), 1,
      anon_sym_LF,
    ACTIONS(224), 1,
      anon_sym_RBRACK,
    STATE(55), 1,
      aux_sym_array_repeat1,
  [684] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(226), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(228), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [696] = 5,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_DQUOTE,
    ACTIONS(232), 1,
      aux_sym_string_content_token1,
    ACTIONS(234), 1,
      sym_escape_sequence,
    STATE(47), 1,
      aux_sym__string_content,
  [712] = 5,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_DQUOTE,
    ACTIONS(238), 1,
      aux_sym_string_content_token1,
    ACTIONS(241), 1,
      sym_escape_sequence,
    STATE(53), 1,
      aux_sym__string_content,
  [728] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_EQ,
  [738] = 5,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_COMMA,
    ACTIONS(246), 1,
      anon_sym_LF,
    ACTIONS(248), 1,
      anon_sym_RBRACK,
    STATE(46), 1,
      aux_sym_array_repeat1,
  [754] = 5,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(250), 1,
      ts_builtin_sym_end,
    ACTIONS(252), 1,
      anon_sym_COMMA,
    ACTIONS(254), 1,
      anon_sym_LF,
    STATE(40), 1,
      aux_sym_document_repeat1,
  [770] = 5,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_COMMA,
    ACTIONS(258), 1,
      anon_sym_LF,
    ACTIONS(260), 1,
      anon_sym_RBRACE,
    STATE(58), 1,
      aux_sym_document_repeat1,
  [786] = 5,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_COMMA,
    ACTIONS(264), 1,
      anon_sym_LF,
    ACTIONS(266), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      aux_sym_document_repeat1,
  [802] = 5,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(204), 1,
      aux_sym_string_content_token1,
    ACTIONS(206), 1,
      sym_escape_sequence,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    STATE(53), 1,
      aux_sym__string_content,
  [818] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(79), 3,
      ts_builtin_sym_end,
      sym_unquoted_string,
      anon_sym_DOLLAR_LBRACE_QMARK,
  [830] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(270), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(272), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [842] = 3,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_LF,
    ACTIONS(200), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [853] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_RBRACE,
  [860] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
  [867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
  [874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
  [881] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
  [888] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      ts_builtin_sym_end,
  [895] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      ts_builtin_sym_end,
  [902] = 2,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(278), 1,
      aux_sym_multiline_string_token1,
  [909] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
  [916] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
  [923] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      ts_builtin_sym_end,
  [930] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_RBRACE,
  [937] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      ts_builtin_sym_end,
  [944] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      sym_unquoted_string,
  [951] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
  [958] = 2,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(286), 1,
      aux_sym_multiline_string_token1,
  [965] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
  [972] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      sym_unquoted_string,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(10)] = 0,
  [SMALL_STATE(11)] = 24,
  [SMALL_STATE(12)] = 48,
  [SMALL_STATE(13)] = 73,
  [SMALL_STATE(14)] = 89,
  [SMALL_STATE(15)] = 109,
  [SMALL_STATE(16)] = 129,
  [SMALL_STATE(17)] = 149,
  [SMALL_STATE(18)] = 169,
  [SMALL_STATE(19)] = 189,
  [SMALL_STATE(20)] = 209,
  [SMALL_STATE(21)] = 229,
  [SMALL_STATE(22)] = 249,
  [SMALL_STATE(23)] = 269,
  [SMALL_STATE(24)] = 289,
  [SMALL_STATE(25)] = 309,
  [SMALL_STATE(26)] = 322,
  [SMALL_STATE(27)] = 335,
  [SMALL_STATE(28)] = 348,
  [SMALL_STATE(29)] = 361,
  [SMALL_STATE(30)] = 374,
  [SMALL_STATE(31)] = 387,
  [SMALL_STATE(32)] = 404,
  [SMALL_STATE(33)] = 417,
  [SMALL_STATE(34)] = 430,
  [SMALL_STATE(35)] = 443,
  [SMALL_STATE(36)] = 456,
  [SMALL_STATE(37)] = 469,
  [SMALL_STATE(38)] = 482,
  [SMALL_STATE(39)] = 499,
  [SMALL_STATE(40)] = 518,
  [SMALL_STATE(41)] = 534,
  [SMALL_STATE(42)] = 546,
  [SMALL_STATE(43)] = 562,
  [SMALL_STATE(44)] = 578,
  [SMALL_STATE(45)] = 594,
  [SMALL_STATE(46)] = 604,
  [SMALL_STATE(47)] = 620,
  [SMALL_STATE(48)] = 636,
  [SMALL_STATE(49)] = 652,
  [SMALL_STATE(50)] = 668,
  [SMALL_STATE(51)] = 684,
  [SMALL_STATE(52)] = 696,
  [SMALL_STATE(53)] = 712,
  [SMALL_STATE(54)] = 728,
  [SMALL_STATE(55)] = 738,
  [SMALL_STATE(56)] = 754,
  [SMALL_STATE(57)] = 770,
  [SMALL_STATE(58)] = 786,
  [SMALL_STATE(59)] = 802,
  [SMALL_STATE(60)] = 818,
  [SMALL_STATE(61)] = 830,
  [SMALL_STATE(62)] = 842,
  [SMALL_STATE(63)] = 853,
  [SMALL_STATE(64)] = 860,
  [SMALL_STATE(65)] = 867,
  [SMALL_STATE(66)] = 874,
  [SMALL_STATE(67)] = 881,
  [SMALL_STATE(68)] = 888,
  [SMALL_STATE(69)] = 895,
  [SMALL_STATE(70)] = 902,
  [SMALL_STATE(71)] = 909,
  [SMALL_STATE(72)] = 916,
  [SMALL_STATE(73)] = 923,
  [SMALL_STATE(74)] = 930,
  [SMALL_STATE(75)] = 937,
  [SMALL_STATE(76)] = 944,
  [SMALL_STATE(77)] = 951,
  [SMALL_STATE(78)] = 958,
  [SMALL_STATE(79)] = 965,
  [SMALL_STATE(80)] = 972,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_value, 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_value, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_value_repeat1, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_value_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_value_repeat1, 2), SHIFT_REPEAT(11),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_value_repeat1, 2), SHIFT_REPEAT(80),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_value_repeat1, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_value_repeat1, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitution, 3),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substitution, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_value_repeat1, 2), SHIFT_REPEAT(21),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_value_repeat1, 2), SHIFT_REPEAT(76),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_value_repeat1, 2), SHIFT_REPEAT(76),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 5),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 5),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 5),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 5),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 4),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 2),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(38),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(38),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(9),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(9),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pair, 3),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_content, 2),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_content, 2), SHIFT_REPEAT(53),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_content, 2), SHIFT_REPEAT(53),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 2),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pair, 2),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [282] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_hocon(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
