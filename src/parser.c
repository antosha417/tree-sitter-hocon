#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 87
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 159
#define ALIAS_COUNT 0
#define TOKEN_COUNT 141
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 2

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
  anon_sym_PLUS_EQ = 17,
  sym_unquoted_string = 18,
  sym_unquoted_path = 19,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 20,
  aux_sym_multiline_string_token1 = 21,
  anon_sym_DOLLAR_LBRACE_QMARK = 22,
  anon_sym_DOLLAR_LBRACE = 23,
  anon_sym_include = 24,
  anon_sym_required = 25,
  anon_sym_LPAREN = 26,
  anon_sym_RPAREN = 27,
  anon_sym_url = 28,
  anon_sym_file = 29,
  anon_sym_classpath = 30,
  anon_sym_ns = 31,
  anon_sym_nano = 32,
  anon_sym_nanos = 33,
  anon_sym_nanosecond = 34,
  anon_sym_nanoseconds = 35,
  anon_sym_us = 36,
  anon_sym_micro = 37,
  anon_sym_micros = 38,
  anon_sym_microsecond = 39,
  anon_sym_microseconds = 40,
  anon_sym_ms = 41,
  anon_sym_milli = 42,
  anon_sym_millis = 43,
  anon_sym_millisecond = 44,
  anon_sym_milliseconds = 45,
  anon_sym_s = 46,
  anon_sym_second = 47,
  anon_sym_seconds = 48,
  anon_sym_m = 49,
  anon_sym_minute = 50,
  anon_sym_minutes = 51,
  anon_sym_h = 52,
  anon_sym_hour = 53,
  anon_sym_hours = 54,
  anon_sym_d = 55,
  anon_sym_day = 56,
  anon_sym_days = 57,
  anon_sym_w = 58,
  anon_sym_week = 59,
  anon_sym_weeks = 60,
  anon_sym_mo = 61,
  anon_sym_month = 62,
  anon_sym_months = 63,
  anon_sym_y = 64,
  anon_sym_year = 65,
  anon_sym_years = 66,
  anon_sym_B = 67,
  anon_sym_b = 68,
  anon_sym_byte = 69,
  anon_sym_bytes = 70,
  anon_sym_kB = 71,
  anon_sym_kilobyte = 72,
  anon_sym_kilobytes = 73,
  anon_sym_MB = 74,
  anon_sym_megabyte = 75,
  anon_sym_megabytes = 76,
  anon_sym_GB = 77,
  anon_sym_gigabyte = 78,
  anon_sym_gigabytes = 79,
  anon_sym_TB = 80,
  anon_sym_terabyte = 81,
  anon_sym_terabytes = 82,
  anon_sym_PB = 83,
  anon_sym_petabyte = 84,
  anon_sym_petabytes = 85,
  anon_sym_EB = 86,
  anon_sym_exabyte = 87,
  anon_sym_exabytes = 88,
  anon_sym_ZB = 89,
  anon_sym_zettabyte = 90,
  anon_sym_zettabytes = 91,
  anon_sym_YB = 92,
  anon_sym_yottabyte = 93,
  anon_sym_yottabytes = 94,
  anon_sym_K = 95,
  anon_sym_k = 96,
  anon_sym_Ki = 97,
  anon_sym_KiB = 98,
  anon_sym_kibibyte = 99,
  anon_sym_kibibytes = 100,
  anon_sym_M = 101,
  anon_sym_Mi = 102,
  anon_sym_MiB = 103,
  anon_sym_mebibyte = 104,
  anon_sym_mebibytes = 105,
  anon_sym_G = 106,
  anon_sym_g = 107,
  anon_sym_Gi = 108,
  anon_sym_GiB = 109,
  anon_sym_gibibyte = 110,
  anon_sym_gibibytes = 111,
  anon_sym_T = 112,
  anon_sym_t = 113,
  anon_sym_Ti = 114,
  anon_sym_TiB = 115,
  anon_sym_tebibyte = 116,
  anon_sym_tebibytes = 117,
  anon_sym_P = 118,
  anon_sym_p = 119,
  anon_sym_Pi = 120,
  anon_sym_PiB = 121,
  anon_sym_pebibyte = 122,
  anon_sym_pebibytes = 123,
  anon_sym_E = 124,
  anon_sym_e = 125,
  anon_sym_Ei = 126,
  anon_sym_EiB = 127,
  anon_sym_exbibyte = 128,
  anon_sym_exbibytes = 129,
  anon_sym_Z = 130,
  anon_sym_z = 131,
  anon_sym_Zi = 132,
  anon_sym_ZiB = 133,
  anon_sym_zebibyte = 134,
  anon_sym_zebibytes = 135,
  anon_sym_Y = 136,
  anon_sym_Yi = 137,
  anon_sym_YiB = 138,
  anon_sym_yobibyte = 139,
  anon_sym_yobibytes = 140,
  sym_document = 141,
  sym__value = 142,
  sym_object = 143,
  sym_pair = 144,
  sym_array = 145,
  sym_string = 146,
  sym__separator = 147,
  sym__path = 148,
  aux_sym__string_content = 149,
  sym_unquoted_value = 150,
  sym_multiline_string = 151,
  sym_substitution = 152,
  sym_include = 153,
  sym__resource_name = 154,
  sym_unit = 155,
  aux_sym_document_repeat1 = 156,
  aux_sym_array_repeat1 = 157,
  aux_sym_unquoted_value_repeat1 = 158,
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
  [anon_sym_PLUS_EQ] = "+=",
  [sym_unquoted_string] = "unquoted_string",
  [sym_unquoted_path] = "unquoted_path",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [aux_sym_multiline_string_token1] = "multiline_string_token1",
  [anon_sym_DOLLAR_LBRACE_QMARK] = "${\?",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_include] = "include",
  [anon_sym_required] = "required",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_url] = "url",
  [anon_sym_file] = "file",
  [anon_sym_classpath] = "classpath",
  [anon_sym_ns] = "ns",
  [anon_sym_nano] = "nano",
  [anon_sym_nanos] = "nanos",
  [anon_sym_nanosecond] = "nanosecond",
  [anon_sym_nanoseconds] = "nanoseconds",
  [anon_sym_us] = "us",
  [anon_sym_micro] = "micro",
  [anon_sym_micros] = "micros",
  [anon_sym_microsecond] = "microsecond",
  [anon_sym_microseconds] = "microseconds",
  [anon_sym_ms] = "ms",
  [anon_sym_milli] = "milli",
  [anon_sym_millis] = "millis",
  [anon_sym_millisecond] = "millisecond",
  [anon_sym_milliseconds] = "milliseconds",
  [anon_sym_s] = "s",
  [anon_sym_second] = "second",
  [anon_sym_seconds] = "seconds",
  [anon_sym_m] = "m",
  [anon_sym_minute] = "minute",
  [anon_sym_minutes] = "minutes",
  [anon_sym_h] = "h",
  [anon_sym_hour] = "hour",
  [anon_sym_hours] = "hours",
  [anon_sym_d] = "d",
  [anon_sym_day] = "day",
  [anon_sym_days] = "days",
  [anon_sym_w] = "w",
  [anon_sym_week] = "week",
  [anon_sym_weeks] = "weeks",
  [anon_sym_mo] = "mo",
  [anon_sym_month] = "month",
  [anon_sym_months] = "months",
  [anon_sym_y] = "y",
  [anon_sym_year] = "year",
  [anon_sym_years] = "years",
  [anon_sym_B] = "B",
  [anon_sym_b] = "b",
  [anon_sym_byte] = "byte",
  [anon_sym_bytes] = "bytes",
  [anon_sym_kB] = "kB",
  [anon_sym_kilobyte] = "kilobyte",
  [anon_sym_kilobytes] = "kilobytes",
  [anon_sym_MB] = "MB",
  [anon_sym_megabyte] = "megabyte",
  [anon_sym_megabytes] = "megabytes",
  [anon_sym_GB] = "GB",
  [anon_sym_gigabyte] = "gigabyte",
  [anon_sym_gigabytes] = "gigabytes",
  [anon_sym_TB] = "TB",
  [anon_sym_terabyte] = "terabyte",
  [anon_sym_terabytes] = "terabytes",
  [anon_sym_PB] = "PB",
  [anon_sym_petabyte] = "petabyte",
  [anon_sym_petabytes] = "petabytes",
  [anon_sym_EB] = "EB",
  [anon_sym_exabyte] = "exabyte",
  [anon_sym_exabytes] = "exabytes",
  [anon_sym_ZB] = "ZB",
  [anon_sym_zettabyte] = "zettabyte",
  [anon_sym_zettabytes] = "zettabytes",
  [anon_sym_YB] = "YB",
  [anon_sym_yottabyte] = "yottabyte",
  [anon_sym_yottabytes] = "yottabytes",
  [anon_sym_K] = "K",
  [anon_sym_k] = "k",
  [anon_sym_Ki] = "Ki",
  [anon_sym_KiB] = "KiB",
  [anon_sym_kibibyte] = "kibibyte",
  [anon_sym_kibibytes] = "kibibytes",
  [anon_sym_M] = "M",
  [anon_sym_Mi] = "Mi",
  [anon_sym_MiB] = "MiB",
  [anon_sym_mebibyte] = "mebibyte",
  [anon_sym_mebibytes] = "mebibytes",
  [anon_sym_G] = "G",
  [anon_sym_g] = "g",
  [anon_sym_Gi] = "Gi",
  [anon_sym_GiB] = "GiB",
  [anon_sym_gibibyte] = "gibibyte",
  [anon_sym_gibibytes] = "gibibytes",
  [anon_sym_T] = "T",
  [anon_sym_t] = "t",
  [anon_sym_Ti] = "Ti",
  [anon_sym_TiB] = "TiB",
  [anon_sym_tebibyte] = "tebibyte",
  [anon_sym_tebibytes] = "tebibytes",
  [anon_sym_P] = "P",
  [anon_sym_p] = "p",
  [anon_sym_Pi] = "Pi",
  [anon_sym_PiB] = "PiB",
  [anon_sym_pebibyte] = "pebibyte",
  [anon_sym_pebibytes] = "pebibytes",
  [anon_sym_E] = "E",
  [anon_sym_e] = "e",
  [anon_sym_Ei] = "Ei",
  [anon_sym_EiB] = "EiB",
  [anon_sym_exbibyte] = "exbibyte",
  [anon_sym_exbibytes] = "exbibytes",
  [anon_sym_Z] = "Z",
  [anon_sym_z] = "z",
  [anon_sym_Zi] = "Zi",
  [anon_sym_ZiB] = "ZiB",
  [anon_sym_zebibyte] = "zebibyte",
  [anon_sym_zebibytes] = "zebibytes",
  [anon_sym_Y] = "Y",
  [anon_sym_Yi] = "Yi",
  [anon_sym_YiB] = "YiB",
  [anon_sym_yobibyte] = "yobibyte",
  [anon_sym_yobibytes] = "yobibytes",
  [sym_document] = "document",
  [sym__value] = "_value",
  [sym_object] = "object",
  [sym_pair] = "pair",
  [sym_array] = "array",
  [sym_string] = "string",
  [sym__separator] = "_separator",
  [sym__path] = "_path",
  [aux_sym__string_content] = "_string_content",
  [sym_unquoted_value] = "unquoted_value",
  [sym_multiline_string] = "multiline_string",
  [sym_substitution] = "substitution",
  [sym_include] = "include",
  [sym__resource_name] = "_resource_name",
  [sym_unit] = "unit",
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
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [sym_unquoted_string] = sym_unquoted_string,
  [sym_unquoted_path] = sym_unquoted_path,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [aux_sym_multiline_string_token1] = aux_sym_multiline_string_token1,
  [anon_sym_DOLLAR_LBRACE_QMARK] = anon_sym_DOLLAR_LBRACE_QMARK,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_required] = anon_sym_required,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_url] = anon_sym_url,
  [anon_sym_file] = anon_sym_file,
  [anon_sym_classpath] = anon_sym_classpath,
  [anon_sym_ns] = anon_sym_ns,
  [anon_sym_nano] = anon_sym_nano,
  [anon_sym_nanos] = anon_sym_nanos,
  [anon_sym_nanosecond] = anon_sym_nanosecond,
  [anon_sym_nanoseconds] = anon_sym_nanoseconds,
  [anon_sym_us] = anon_sym_us,
  [anon_sym_micro] = anon_sym_micro,
  [anon_sym_micros] = anon_sym_micros,
  [anon_sym_microsecond] = anon_sym_microsecond,
  [anon_sym_microseconds] = anon_sym_microseconds,
  [anon_sym_ms] = anon_sym_ms,
  [anon_sym_milli] = anon_sym_milli,
  [anon_sym_millis] = anon_sym_millis,
  [anon_sym_millisecond] = anon_sym_millisecond,
  [anon_sym_milliseconds] = anon_sym_milliseconds,
  [anon_sym_s] = anon_sym_s,
  [anon_sym_second] = anon_sym_second,
  [anon_sym_seconds] = anon_sym_seconds,
  [anon_sym_m] = anon_sym_m,
  [anon_sym_minute] = anon_sym_minute,
  [anon_sym_minutes] = anon_sym_minutes,
  [anon_sym_h] = anon_sym_h,
  [anon_sym_hour] = anon_sym_hour,
  [anon_sym_hours] = anon_sym_hours,
  [anon_sym_d] = anon_sym_d,
  [anon_sym_day] = anon_sym_day,
  [anon_sym_days] = anon_sym_days,
  [anon_sym_w] = anon_sym_w,
  [anon_sym_week] = anon_sym_week,
  [anon_sym_weeks] = anon_sym_weeks,
  [anon_sym_mo] = anon_sym_mo,
  [anon_sym_month] = anon_sym_month,
  [anon_sym_months] = anon_sym_months,
  [anon_sym_y] = anon_sym_y,
  [anon_sym_year] = anon_sym_year,
  [anon_sym_years] = anon_sym_years,
  [anon_sym_B] = anon_sym_B,
  [anon_sym_b] = anon_sym_b,
  [anon_sym_byte] = anon_sym_byte,
  [anon_sym_bytes] = anon_sym_bytes,
  [anon_sym_kB] = anon_sym_kB,
  [anon_sym_kilobyte] = anon_sym_kilobyte,
  [anon_sym_kilobytes] = anon_sym_kilobytes,
  [anon_sym_MB] = anon_sym_MB,
  [anon_sym_megabyte] = anon_sym_megabyte,
  [anon_sym_megabytes] = anon_sym_megabytes,
  [anon_sym_GB] = anon_sym_GB,
  [anon_sym_gigabyte] = anon_sym_gigabyte,
  [anon_sym_gigabytes] = anon_sym_gigabytes,
  [anon_sym_TB] = anon_sym_TB,
  [anon_sym_terabyte] = anon_sym_terabyte,
  [anon_sym_terabytes] = anon_sym_terabytes,
  [anon_sym_PB] = anon_sym_PB,
  [anon_sym_petabyte] = anon_sym_petabyte,
  [anon_sym_petabytes] = anon_sym_petabytes,
  [anon_sym_EB] = anon_sym_EB,
  [anon_sym_exabyte] = anon_sym_exabyte,
  [anon_sym_exabytes] = anon_sym_exabytes,
  [anon_sym_ZB] = anon_sym_ZB,
  [anon_sym_zettabyte] = anon_sym_zettabyte,
  [anon_sym_zettabytes] = anon_sym_zettabytes,
  [anon_sym_YB] = anon_sym_YB,
  [anon_sym_yottabyte] = anon_sym_yottabyte,
  [anon_sym_yottabytes] = anon_sym_yottabytes,
  [anon_sym_K] = anon_sym_K,
  [anon_sym_k] = anon_sym_k,
  [anon_sym_Ki] = anon_sym_Ki,
  [anon_sym_KiB] = anon_sym_KiB,
  [anon_sym_kibibyte] = anon_sym_kibibyte,
  [anon_sym_kibibytes] = anon_sym_kibibytes,
  [anon_sym_M] = anon_sym_M,
  [anon_sym_Mi] = anon_sym_Mi,
  [anon_sym_MiB] = anon_sym_MiB,
  [anon_sym_mebibyte] = anon_sym_mebibyte,
  [anon_sym_mebibytes] = anon_sym_mebibytes,
  [anon_sym_G] = anon_sym_G,
  [anon_sym_g] = anon_sym_g,
  [anon_sym_Gi] = anon_sym_Gi,
  [anon_sym_GiB] = anon_sym_GiB,
  [anon_sym_gibibyte] = anon_sym_gibibyte,
  [anon_sym_gibibytes] = anon_sym_gibibytes,
  [anon_sym_T] = anon_sym_T,
  [anon_sym_t] = anon_sym_t,
  [anon_sym_Ti] = anon_sym_Ti,
  [anon_sym_TiB] = anon_sym_TiB,
  [anon_sym_tebibyte] = anon_sym_tebibyte,
  [anon_sym_tebibytes] = anon_sym_tebibytes,
  [anon_sym_P] = anon_sym_P,
  [anon_sym_p] = anon_sym_p,
  [anon_sym_Pi] = anon_sym_Pi,
  [anon_sym_PiB] = anon_sym_PiB,
  [anon_sym_pebibyte] = anon_sym_pebibyte,
  [anon_sym_pebibytes] = anon_sym_pebibytes,
  [anon_sym_E] = anon_sym_E,
  [anon_sym_e] = anon_sym_e,
  [anon_sym_Ei] = anon_sym_Ei,
  [anon_sym_EiB] = anon_sym_EiB,
  [anon_sym_exbibyte] = anon_sym_exbibyte,
  [anon_sym_exbibytes] = anon_sym_exbibytes,
  [anon_sym_Z] = anon_sym_Z,
  [anon_sym_z] = anon_sym_z,
  [anon_sym_Zi] = anon_sym_Zi,
  [anon_sym_ZiB] = anon_sym_ZiB,
  [anon_sym_zebibyte] = anon_sym_zebibyte,
  [anon_sym_zebibytes] = anon_sym_zebibytes,
  [anon_sym_Y] = anon_sym_Y,
  [anon_sym_Yi] = anon_sym_Yi,
  [anon_sym_YiB] = anon_sym_YiB,
  [anon_sym_yobibyte] = anon_sym_yobibyte,
  [anon_sym_yobibytes] = anon_sym_yobibytes,
  [sym_document] = sym_document,
  [sym__value] = sym__value,
  [sym_object] = sym_object,
  [sym_pair] = sym_pair,
  [sym_array] = sym_array,
  [sym_string] = sym_string,
  [sym__separator] = sym__separator,
  [sym__path] = sym__path,
  [aux_sym__string_content] = aux_sym__string_content,
  [sym_unquoted_value] = sym_unquoted_value,
  [sym_multiline_string] = sym_multiline_string,
  [sym_substitution] = sym_substitution,
  [sym_include] = sym_include,
  [sym__resource_name] = sym__resource_name,
  [sym_unit] = sym_unit,
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
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_unquoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_unquoted_path] = {
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
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_required] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_url] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_file] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_classpath] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ns] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nano] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nanos] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nanosecond] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nanoseconds] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_us] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_micro] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_micros] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_microsecond] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_microseconds] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ms] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_milli] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_millis] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_millisecond] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_milliseconds] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_second] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_seconds] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_m] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_minute] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_minutes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_h] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hour] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hours] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_d] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_day] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_days] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_w] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_week] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_weeks] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_month] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_months] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_y] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_year] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_years] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_B] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_b] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_byte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kilobyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kilobytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_megabyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_megabytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gigabyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gigabytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_terabyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_terabytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_petabyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_petabytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exabyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exabytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ZB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_zettabyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_zettabytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_YB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yottabyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yottabytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_K] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_k] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Ki] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_KiB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kibibyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kibibytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_M] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Mi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MiB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mebibyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mebibytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_G] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_g] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Gi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GiB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gibibyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gibibytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_T] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Ti] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TiB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tebibyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tebibytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_P] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_p] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Pi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PiB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pebibyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pebibytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_E] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_e] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Ei] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EiB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exbibyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exbibytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Z] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_z] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Zi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ZiB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_zebibyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_zebibytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Y] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Yi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_YiB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yobibyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yobibytes] = {
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
  [sym__separator] = {
    .visible = false,
    .named = true,
  },
  [sym__path] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__string_content] = {
    .visible = false,
    .named = false,
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
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [sym__resource_name] = {
    .visible = false,
    .named = true,
  },
  [sym_unit] = {
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

enum {
  field_key = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_unquoted_path_character_set_1(int32_t c) {
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

static inline bool sym_unquoted_path_character_set_2(int32_t c) {
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

static inline bool sym_unquoted_path_character_set_3(int32_t c) {
  return (c < ':'
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= '$' || (c < '*'
        ? c == '&'
        : (c <= ',' || c == '/'))))
    : (c <= ':' || (c < '`'
      ? (c < '?'
        ? c == '='
        : (c <= '?' || (c >= '[' && c <= '^')))
      : (c <= '`' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(192);
      if (lookahead == '"') ADVANCE(200);
      if (lookahead == '#') ADVANCE(227);
      if (lookahead == '$') ADVANCE(178);
      if (lookahead == '(') ADVANCE(269);
      if (lookahead == ')') ADVANCE(270);
      if (lookahead == '+') ADVANCE(12);
      if (lookahead == ',') ADVANCE(193);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '.') ADVANCE(183);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '0') ADVANCE(206);
      if (lookahead == ':') ADVANCE(228);
      if (lookahead == '=') ADVANCE(229);
      if (lookahead == 'B') ADVANCE(310);
      if (lookahead == 'E') ADVANCE(368);
      if (lookahead == 'G') ADVANCE(349);
      if (lookahead == 'K') ADVANCE(338);
      if (lookahead == 'M') ADVANCE(344);
      if (lookahead == 'P') ADVANCE(362);
      if (lookahead == 'T') ADVANCE(355);
      if (lookahead == 'Y') ADVANCE(380);
      if (lookahead == 'Z') ADVANCE(374);
      if (lookahead == '[') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(182);
      if (lookahead == ']') ADVANCE(198);
      if (lookahead == 'b') ADVANCE(311);
      if (lookahead == 'c') ADVANCE(101);
      if (lookahead == 'd') ADVANCE(298);
      if (lookahead == 'e') ADVANCE(369);
      if (lookahead == 'f') ADVANCE(16);
      if (lookahead == 'g') ADVANCE(350);
      if (lookahead == 'h') ADVANCE(295);
      if (lookahead == 'i') ADVANCE(109);
      if (lookahead == 'k') ADVANCE(339);
      if (lookahead == 'm') ADVANCE(292);
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == 'p') ADVANCE(363);
      if (lookahead == 'r') ADVANCE(62);
      if (lookahead == 's') ADVANCE(289);
      if (lookahead == 't') ADVANCE(357);
      if (lookahead == 'u') ADVANCE(128);
      if (lookahead == 'w') ADVANCE(301);
      if (lookahead == 'y') ADVANCE(307);
      if (lookahead == 'z') ADVANCE(375);
      if (lookahead == '{') ADVANCE(195);
      if (lookahead == '}') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(190)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(208);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '"') ADVANCE(199);
      if (lookahead == '#') ADVANCE(203);
      if (lookahead == '/') ADVANCE(202);
      if (lookahead == '\\') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(201);
      if (lookahead != 0) ADVANCE(204);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(200);
      if (lookahead == '#') ADVANCE(227);
      if (lookahead == '$') ADVANCE(178);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(13);
      if (lookahead == '.') ADVANCE(242);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '0') ADVANCE(206);
      if (lookahead == '[') ADVANCE(197);
      if (lookahead == ']') ADVANCE(198);
      if (lookahead == 'f') ADVANCE(232);
      if (lookahead == 'n') ADVANCE(241);
      if (lookahead == 't') ADVANCE(238);
      if (lookahead == '{') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(261);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(199);
      if (lookahead == '#') ADVANCE(227);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == 'c') ADVANCE(101);
      if (lookahead == 'f') ADVANCE(90);
      if (lookahead == 'r') ADVANCE(62);
      if (lookahead == 'u') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(199);
      if (lookahead == '#') ADVANCE(227);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(226);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '/') ADVANCE(226);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(10);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(262);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(9);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(227);
      END_STATE();
    case 12:
      if (lookahead == '0') ADVANCE(207);
      if (lookahead == '=') ADVANCE(230);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(208);
      END_STATE();
    case 13:
      if (lookahead == '0') ADVANCE(207);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(208);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'b') ADVANCE(92);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(110);
      if (lookahead == 's') ADVANCE(274);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(110);
      if (lookahead == 's') ADVANCE(274);
      if (lookahead == 'u') ADVANCE(108);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 27:
      if (lookahead == 'b') ADVANCE(162);
      END_STATE();
    case 28:
      if (lookahead == 'b') ADVANCE(163);
      END_STATE();
    case 29:
      if (lookahead == 'b') ADVANCE(164);
      END_STATE();
    case 30:
      if (lookahead == 'b') ADVANCE(165);
      END_STATE();
    case 31:
      if (lookahead == 'b') ADVANCE(166);
      END_STATE();
    case 32:
      if (lookahead == 'b') ADVANCE(167);
      END_STATE();
    case 33:
      if (lookahead == 'b') ADVANCE(168);
      END_STATE();
    case 34:
      if (lookahead == 'b') ADVANCE(169);
      END_STATE();
    case 35:
      if (lookahead == 'b') ADVANCE(170);
      END_STATE();
    case 36:
      if (lookahead == 'b') ADVANCE(171);
      END_STATE();
    case 37:
      if (lookahead == 'b') ADVANCE(172);
      END_STATE();
    case 38:
      if (lookahead == 'b') ADVANCE(173);
      END_STATE();
    case 39:
      if (lookahead == 'b') ADVANCE(174);
      END_STATE();
    case 40:
      if (lookahead == 'b') ADVANCE(175);
      END_STATE();
    case 41:
      if (lookahead == 'b') ADVANCE(176);
      END_STATE();
    case 42:
      if (lookahead == 'b') ADVANCE(177);
      END_STATE();
    case 43:
      if (lookahead == 'b') ADVANCE(93);
      if (lookahead == 'g') ADVANCE(21);
      END_STATE();
    case 44:
      if (lookahead == 'b') ADVANCE(94);
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 45:
      if (lookahead == 'b') ADVANCE(95);
      if (lookahead == 'g') ADVANCE(22);
      END_STATE();
    case 46:
      if (lookahead == 'b') ADVANCE(96);
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 47:
      if (lookahead == 'b') ADVANCE(97);
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 48:
      if (lookahead == 'b') ADVANCE(98);
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 49:
      if (lookahead == 'b') ADVANCE(99);
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(126);
      if (lookahead == 'l') ADVANCE(105);
      if (lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(117);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(118);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(107);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(119);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(120);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(290);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(268);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(277);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(282);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(287);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(70);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(293);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(330);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(372);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(353);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(321);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(315);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(347);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(366);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(360);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(336);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(333);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 87:
      if (lookahead == 'h') ADVANCE(305);
      END_STATE();
    case 88:
      if (lookahead == 'h') ADVANCE(273);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(285);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 100:
      if (lookahead == 'k') ADVANCE(302);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(271);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(222);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(133);
      END_STATE();
    case 105:
      if (lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(157);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(275);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(280);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 119:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 121:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 122:
      if (lookahead == 'p') ADVANCE(20);
      END_STATE();
    case 123:
      if (lookahead == 'q') ADVANCE(158);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(296);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(308);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(102);
      if (lookahead == 's') ADVANCE(279);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 130:
      if (lookahead == 's') ADVANCE(279);
      END_STATE();
    case 131:
      if (lookahead == 's') ADVANCE(122);
      END_STATE();
    case 132:
      if (lookahead == 's') ADVANCE(131);
      END_STATE();
    case 133:
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 154:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 155:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 156:
      if (lookahead == 'u') ADVANCE(124);
      END_STATE();
    case 157:
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 158:
      if (lookahead == 'u') ADVANCE(91);
      END_STATE();
    case 159:
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 160:
      if (lookahead == 'u') ADVANCE(137);
      END_STATE();
    case 161:
      if (lookahead == 'y') ADVANCE(299);
      END_STATE();
    case 162:
      if (lookahead == 'y') ADVANCE(138);
      END_STATE();
    case 163:
      if (lookahead == 'y') ADVANCE(139);
      END_STATE();
    case 164:
      if (lookahead == 'y') ADVANCE(140);
      END_STATE();
    case 165:
      if (lookahead == 'y') ADVANCE(141);
      END_STATE();
    case 166:
      if (lookahead == 'y') ADVANCE(142);
      END_STATE();
    case 167:
      if (lookahead == 'y') ADVANCE(143);
      END_STATE();
    case 168:
      if (lookahead == 'y') ADVANCE(144);
      END_STATE();
    case 169:
      if (lookahead == 'y') ADVANCE(145);
      END_STATE();
    case 170:
      if (lookahead == 'y') ADVANCE(146);
      END_STATE();
    case 171:
      if (lookahead == 'y') ADVANCE(147);
      END_STATE();
    case 172:
      if (lookahead == 'y') ADVANCE(148);
      END_STATE();
    case 173:
      if (lookahead == 'y') ADVANCE(149);
      END_STATE();
    case 174:
      if (lookahead == 'y') ADVANCE(150);
      END_STATE();
    case 175:
      if (lookahead == 'y') ADVANCE(151);
      END_STATE();
    case 176:
      if (lookahead == 'y') ADVANCE(152);
      END_STATE();
    case 177:
      if (lookahead == 'y') ADVANCE(153);
      END_STATE();
    case 178:
      if (lookahead == '{') ADVANCE(265);
      END_STATE();
    case 179:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      END_STATE();
    case 180:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(214);
      END_STATE();
    case 181:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(215);
      END_STATE();
    case 182:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(205);
      END_STATE();
    case 183:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      END_STATE();
    case 184:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      END_STATE();
    case 185:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(217);
      END_STATE();
    case 186:
      if (!sym_unquoted_path_character_set_1(lookahead)) ADVANCE(253);
      END_STATE();
    case 187:
      if (!sym_unquoted_path_character_set_1(lookahead)) ADVANCE(244);
      END_STATE();
    case 188:
      if (eof) ADVANCE(192);
      if (lookahead == '\n') ADVANCE(194);
      if (lookahead == '#') ADVANCE(227);
      if (lookahead == '$') ADVANCE(178);
      if (lookahead == ',') ADVANCE(193);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == ']') ADVANCE(198);
      if (lookahead == '}') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(188)
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 189:
      if (eof) ADVANCE(192);
      if (lookahead == '\n') ADVANCE(194);
      if (lookahead == '#') ADVANCE(227);
      if (lookahead == ',') ADVANCE(193);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == 'B') ADVANCE(310);
      if (lookahead == 'E') ADVANCE(368);
      if (lookahead == 'G') ADVANCE(349);
      if (lookahead == 'K') ADVANCE(338);
      if (lookahead == 'M') ADVANCE(344);
      if (lookahead == 'P') ADVANCE(362);
      if (lookahead == 'T') ADVANCE(355);
      if (lookahead == 'Y') ADVANCE(380);
      if (lookahead == 'Z') ADVANCE(374);
      if (lookahead == ']') ADVANCE(198);
      if (lookahead == 'b') ADVANCE(311);
      if (lookahead == 'd') ADVANCE(298);
      if (lookahead == 'e') ADVANCE(369);
      if (lookahead == 'g') ADVANCE(350);
      if (lookahead == 'h') ADVANCE(295);
      if (lookahead == 'k') ADVANCE(339);
      if (lookahead == 'm') ADVANCE(292);
      if (lookahead == 'n') ADVANCE(17);
      if (lookahead == 'p') ADVANCE(363);
      if (lookahead == 's') ADVANCE(289);
      if (lookahead == 't') ADVANCE(356);
      if (lookahead == 'u') ADVANCE(130);
      if (lookahead == 'w') ADVANCE(301);
      if (lookahead == 'y') ADVANCE(307);
      if (lookahead == 'z') ADVANCE(375);
      if (lookahead == '}') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(189)
      END_STATE();
    case 190:
      if (eof) ADVANCE(192);
      if (lookahead == '"') ADVANCE(200);
      if (lookahead == '#') ADVANCE(227);
      if (lookahead == '$') ADVANCE(178);
      if (lookahead == '(') ADVANCE(269);
      if (lookahead == ')') ADVANCE(270);
      if (lookahead == '+') ADVANCE(12);
      if (lookahead == ',') ADVANCE(193);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '.') ADVANCE(183);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '0') ADVANCE(206);
      if (lookahead == ':') ADVANCE(228);
      if (lookahead == '=') ADVANCE(229);
      if (lookahead == 'B') ADVANCE(310);
      if (lookahead == 'E') ADVANCE(368);
      if (lookahead == 'G') ADVANCE(349);
      if (lookahead == 'K') ADVANCE(338);
      if (lookahead == 'M') ADVANCE(344);
      if (lookahead == 'P') ADVANCE(362);
      if (lookahead == 'T') ADVANCE(355);
      if (lookahead == 'Y') ADVANCE(380);
      if (lookahead == 'Z') ADVANCE(374);
      if (lookahead == '[') ADVANCE(197);
      if (lookahead == ']') ADVANCE(198);
      if (lookahead == 'b') ADVANCE(311);
      if (lookahead == 'c') ADVANCE(101);
      if (lookahead == 'd') ADVANCE(298);
      if (lookahead == 'e') ADVANCE(369);
      if (lookahead == 'f') ADVANCE(16);
      if (lookahead == 'g') ADVANCE(350);
      if (lookahead == 'h') ADVANCE(295);
      if (lookahead == 'i') ADVANCE(109);
      if (lookahead == 'k') ADVANCE(339);
      if (lookahead == 'm') ADVANCE(292);
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == 'p') ADVANCE(363);
      if (lookahead == 'r') ADVANCE(62);
      if (lookahead == 's') ADVANCE(289);
      if (lookahead == 't') ADVANCE(357);
      if (lookahead == 'u') ADVANCE(128);
      if (lookahead == 'w') ADVANCE(301);
      if (lookahead == 'y') ADVANCE(307);
      if (lookahead == 'z') ADVANCE(375);
      if (lookahead == '{') ADVANCE(195);
      if (lookahead == '}') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(190)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(208);
      END_STATE();
    case 191:
      if (eof) ADVANCE(192);
      if (lookahead == '"') ADVANCE(199);
      if (lookahead == '#') ADVANCE(227);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(13);
      if (lookahead == '.') ADVANCE(251);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '0') ADVANCE(206);
      if (lookahead == '[') ADVANCE(197);
      if (lookahead == 'i') ADVANCE(256);
      if (lookahead == '{') ADVANCE(195);
      if (lookahead == '}') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(191)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(3);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '#') ADVANCE(203);
      if (lookahead == '/') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(204);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '/') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(204);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(213);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(180);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(179);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(181);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(185);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(213);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(213);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      if (!sym_unquoted_path_character_set_2(lookahead)) ADVANCE(253);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '/') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      if (!sym_unquoted_path_character_set_2(lookahead)) ADVANCE(253);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(211);
      if (!sym_unquoted_path_character_set_2(lookahead)) ADVANCE(244);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '/') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if (!sym_unquoted_path_character_set_2(lookahead)) ADVANCE(244);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == '/') ADVANCE(187);
      if (!sym_unquoted_path_character_set_2(lookahead)) ADVANCE(244);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == '/') ADVANCE(187);
      if (!sym_unquoted_path_character_set_2(lookahead)) ADVANCE(244);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_null);
      if (lookahead == '/') ADVANCE(187);
      if (!sym_unquoted_path_character_set_2(lookahead)) ADVANCE(244);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '"') ADVANCE(263);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '"') ADVANCE(224);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '"') ADVANCE(225);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '+') ADVANCE(184);
      if (lookahead == '-') ADVANCE(243);
      if (lookahead == '/') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if (!sym_unquoted_path_character_set_2(lookahead)) ADVANCE(244);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == 'a') ADVANCE(235);
      if (!sym_unquoted_path_character_set_2(lookahead)) ADVANCE(244);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == 'e') ADVANCE(219);
      if (!sym_unquoted_path_character_set_2(lookahead)) ADVANCE(244);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == 'e') ADVANCE(221);
      if (!sym_unquoted_path_character_set_2(lookahead)) ADVANCE(244);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == 'l') ADVANCE(239);
      if (!sym_unquoted_path_character_set_2(lookahead)) ADVANCE(244);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == 'l') ADVANCE(223);
      if (!sym_unquoted_path_character_set_2(lookahead)) ADVANCE(244);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == 'l') ADVANCE(236);
      if (!sym_unquoted_path_character_set_2(lookahead)) ADVANCE(244);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == 'r') ADVANCE(240);
      if (!sym_unquoted_path_character_set_2(lookahead)) ADVANCE(244);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == 's') ADVANCE(234);
      if (!sym_unquoted_path_character_set_2(lookahead)) ADVANCE(244);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == 'u') ADVANCE(233);
      if (!sym_unquoted_path_character_set_2(lookahead)) ADVANCE(244);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == 'u') ADVANCE(237);
      if (!sym_unquoted_path_character_set_2(lookahead)) ADVANCE(244);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(211);
      if (!sym_unquoted_path_character_set_2(lookahead)) ADVANCE(244);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if (!sym_unquoted_path_character_set_2(lookahead)) ADVANCE(244);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(187);
      if (!sym_unquoted_path_character_set_2(lookahead)) ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_unquoted_path);
      if (lookahead == '+') ADVANCE(184);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == '/') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      if (!sym_unquoted_path_character_set_2(lookahead)) ADVANCE(253);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_unquoted_path);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == 'c') ADVANCE(249);
      if (!sym_unquoted_path_character_set_2(lookahead)) ADVANCE(253);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_unquoted_path);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == 'd') ADVANCE(259);
      if (!sym_unquoted_path_character_set_2(lookahead)) ADVANCE(253);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_unquoted_path);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == 'e') ADVANCE(267);
      if (!sym_unquoted_path_character_set_2(lookahead)) ADVANCE(253);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_unquoted_path);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == 'l') ADVANCE(250);
      if (!sym_unquoted_path_character_set_2(lookahead)) ADVANCE(253);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_unquoted_path);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == 'u') ADVANCE(247);
      if (!sym_unquoted_path_character_set_2(lookahead)) ADVANCE(253);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_unquoted_path);
      if (lookahead == '/') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      if (!sym_unquoted_path_character_set_2(lookahead)) ADVANCE(253);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_unquoted_path);
      if (lookahead == '/') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      if (!sym_unquoted_path_character_set_2(lookahead)) ADVANCE(253);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_unquoted_path);
      if (lookahead == '/') ADVANCE(186);
      if (!sym_unquoted_path_character_set_2(lookahead)) ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_unquoted_path);
      if (lookahead == '/') ADVANCE(260);
      if (lookahead == 'c') ADVANCE(257);
      if (!sym_unquoted_path_character_set_2(lookahead)) ADVANCE(253);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_unquoted_path);
      if (lookahead == '/') ADVANCE(260);
      if (lookahead == 'd') ADVANCE(248);
      if (!sym_unquoted_path_character_set_2(lookahead)) ADVANCE(253);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_unquoted_path);
      if (lookahead == '/') ADVANCE(260);
      if (lookahead == 'l') ADVANCE(246);
      if (lookahead == 'n') ADVANCE(254);
      if (!sym_unquoted_path_character_set_2(lookahead)) ADVANCE(253);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_unquoted_path);
      if (lookahead == '/') ADVANCE(260);
      if (lookahead == 'l') ADVANCE(258);
      if (!sym_unquoted_path_character_set_2(lookahead)) ADVANCE(253);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_unquoted_path);
      if (lookahead == '/') ADVANCE(260);
      if (lookahead == 'u') ADVANCE(255);
      if (!sym_unquoted_path_character_set_2(lookahead)) ADVANCE(253);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_unquoted_path);
      if (lookahead == '/') ADVANCE(260);
      if (!sym_unquoted_path_character_set_2(lookahead)) ADVANCE(253);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_unquoted_path);
      if (!sym_unquoted_path_character_set_1(lookahead)) ADVANCE(253);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(227);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE_QMARK);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      if (lookahead == '?') ADVANCE(264);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_include);
      if (!sym_unquoted_path_character_set_3(lookahead)) ADVANCE(253);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_required);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_url);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_classpath);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_ns);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_nano);
      if (lookahead == 's') ADVANCE(276);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_nanos);
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_nanosecond);
      if (lookahead == 's') ADVANCE(278);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_nanoseconds);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_us);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_micro);
      if (lookahead == 's') ADVANCE(281);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_micros);
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_microsecond);
      if (lookahead == 's') ADVANCE(283);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_microseconds);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_ms);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_milli);
      if (lookahead == 's') ADVANCE(286);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_millis);
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_millisecond);
      if (lookahead == 's') ADVANCE(288);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_milliseconds);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_second);
      if (lookahead == 's') ADVANCE(291);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_seconds);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == 'i') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(304);
      if (lookahead == 's') ADVANCE(284);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_minute);
      if (lookahead == 's') ADVANCE(294);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_minutes);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_h);
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_hour);
      if (lookahead == 's') ADVANCE(297);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_hours);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_d);
      if (lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_day);
      if (lookahead == 's') ADVANCE(300);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_days);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_w);
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_week);
      if (lookahead == 's') ADVANCE(303);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_weeks);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_mo);
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_month);
      if (lookahead == 's') ADVANCE(306);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_months);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_y);
      if (lookahead == 'e') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_year);
      if (lookahead == 's') ADVANCE(309);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_years);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_B);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == 'y') ADVANCE(136);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_byte);
      if (lookahead == 's') ADVANCE(313);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_kB);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_kilobyte);
      if (lookahead == 's') ADVANCE(316);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_kilobytes);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_MB);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_megabyte);
      if (lookahead == 's') ADVANCE(319);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_megabytes);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_GB);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_gigabyte);
      if (lookahead == 's') ADVANCE(322);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_gigabytes);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_TB);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_terabyte);
      if (lookahead == 's') ADVANCE(325);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_terabytes);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_PB);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_petabyte);
      if (lookahead == 's') ADVANCE(328);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_petabytes);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_EB);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_exabyte);
      if (lookahead == 's') ADVANCE(331);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_exabytes);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_ZB);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_zettabyte);
      if (lookahead == 's') ADVANCE(334);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_zettabytes);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_YB);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_yottabyte);
      if (lookahead == 's') ADVANCE(337);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_yottabytes);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_K);
      if (lookahead == 'i') ADVANCE(340);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_k);
      if (lookahead == 'B') ADVANCE(314);
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_Ki);
      if (lookahead == 'B') ADVANCE(341);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_KiB);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_kibibyte);
      if (lookahead == 's') ADVANCE(343);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_kibibytes);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_M);
      if (lookahead == 'B') ADVANCE(317);
      if (lookahead == 'i') ADVANCE(345);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_Mi);
      if (lookahead == 'B') ADVANCE(346);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_MiB);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_mebibyte);
      if (lookahead == 's') ADVANCE(348);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_mebibytes);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_G);
      if (lookahead == 'B') ADVANCE(320);
      if (lookahead == 'i') ADVANCE(351);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_g);
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_Gi);
      if (lookahead == 'B') ADVANCE(352);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_GiB);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_gibibyte);
      if (lookahead == 's') ADVANCE(354);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_gibibytes);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'B') ADVANCE(323);
      if (lookahead == 'i') ADVANCE(358);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_t);
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_t);
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_Ti);
      if (lookahead == 'B') ADVANCE(359);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_TiB);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_tebibyte);
      if (lookahead == 's') ADVANCE(361);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_tebibytes);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_P);
      if (lookahead == 'B') ADVANCE(326);
      if (lookahead == 'i') ADVANCE(364);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_Pi);
      if (lookahead == 'B') ADVANCE(365);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_PiB);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_pebibyte);
      if (lookahead == 's') ADVANCE(367);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_pebibytes);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_E);
      if (lookahead == 'B') ADVANCE(329);
      if (lookahead == 'i') ADVANCE(370);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == 'x') ADVANCE(15);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_Ei);
      if (lookahead == 'B') ADVANCE(371);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_EiB);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_exbibyte);
      if (lookahead == 's') ADVANCE(373);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_exbibytes);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_Z);
      if (lookahead == 'B') ADVANCE(332);
      if (lookahead == 'i') ADVANCE(376);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_z);
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_Zi);
      if (lookahead == 'B') ADVANCE(377);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_ZiB);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_zebibyte);
      if (lookahead == 's') ADVANCE(379);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_zebibytes);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_Y);
      if (lookahead == 'B') ADVANCE(335);
      if (lookahead == 'i') ADVANCE(381);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_Yi);
      if (lookahead == 'B') ADVANCE(382);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_YiB);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_yobibyte);
      if (lookahead == 's') ADVANCE(384);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_yobibytes);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 191},
  [2] = {.lex_state = 189},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 188},
  [12] = {.lex_state = 188},
  [13] = {.lex_state = 191},
  [14] = {.lex_state = 191},
  [15] = {.lex_state = 191},
  [16] = {.lex_state = 191},
  [17] = {.lex_state = 191},
  [18] = {.lex_state = 191},
  [19] = {.lex_state = 191},
  [20] = {.lex_state = 191},
  [21] = {.lex_state = 188},
  [22] = {.lex_state = 191},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 189},
  [29] = {.lex_state = 189},
  [30] = {.lex_state = 189},
  [31] = {.lex_state = 189},
  [32] = {.lex_state = 189},
  [33] = {.lex_state = 189},
  [34] = {.lex_state = 189},
  [35] = {.lex_state = 189},
  [36] = {.lex_state = 189},
  [37] = {.lex_state = 189},
  [38] = {.lex_state = 189},
  [39] = {.lex_state = 189},
  [40] = {.lex_state = 191},
  [41] = {.lex_state = 189},
  [42] = {.lex_state = 189},
  [43] = {.lex_state = 189},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 189},
  [46] = {.lex_state = 189},
  [47] = {.lex_state = 189},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 189},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 189},
  [52] = {.lex_state = 189},
  [53] = {.lex_state = 189},
  [54] = {.lex_state = 189},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 189},
  [57] = {.lex_state = 189},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 189},
  [60] = {.lex_state = 189},
  [61] = {.lex_state = 189},
  [62] = {.lex_state = 189},
  [63] = {.lex_state = 189},
  [64] = {.lex_state = 189},
  [65] = {.lex_state = 189},
  [66] = {.lex_state = 191},
  [67] = {.lex_state = 191},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
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
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE_QMARK] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_required] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_url] = ACTIONS(1),
    [anon_sym_file] = ACTIONS(1),
    [anon_sym_classpath] = ACTIONS(1),
    [anon_sym_ns] = ACTIONS(1),
    [anon_sym_nano] = ACTIONS(1),
    [anon_sym_nanos] = ACTIONS(1),
    [anon_sym_nanosecond] = ACTIONS(1),
    [anon_sym_nanoseconds] = ACTIONS(1),
    [anon_sym_us] = ACTIONS(1),
    [anon_sym_micro] = ACTIONS(1),
    [anon_sym_micros] = ACTIONS(1),
    [anon_sym_microsecond] = ACTIONS(1),
    [anon_sym_microseconds] = ACTIONS(1),
    [anon_sym_ms] = ACTIONS(1),
    [anon_sym_milli] = ACTIONS(1),
    [anon_sym_millis] = ACTIONS(1),
    [anon_sym_millisecond] = ACTIONS(1),
    [anon_sym_milliseconds] = ACTIONS(1),
    [anon_sym_s] = ACTIONS(1),
    [anon_sym_second] = ACTIONS(1),
    [anon_sym_seconds] = ACTIONS(1),
    [anon_sym_m] = ACTIONS(1),
    [anon_sym_minute] = ACTIONS(1),
    [anon_sym_minutes] = ACTIONS(1),
    [anon_sym_h] = ACTIONS(1),
    [anon_sym_hour] = ACTIONS(1),
    [anon_sym_hours] = ACTIONS(1),
    [anon_sym_d] = ACTIONS(1),
    [anon_sym_day] = ACTIONS(1),
    [anon_sym_days] = ACTIONS(1),
    [anon_sym_w] = ACTIONS(1),
    [anon_sym_week] = ACTIONS(1),
    [anon_sym_weeks] = ACTIONS(1),
    [anon_sym_mo] = ACTIONS(1),
    [anon_sym_month] = ACTIONS(1),
    [anon_sym_months] = ACTIONS(1),
    [anon_sym_y] = ACTIONS(1),
    [anon_sym_year] = ACTIONS(1),
    [anon_sym_years] = ACTIONS(1),
    [anon_sym_B] = ACTIONS(1),
    [anon_sym_b] = ACTIONS(1),
    [anon_sym_byte] = ACTIONS(1),
    [anon_sym_bytes] = ACTIONS(1),
    [anon_sym_kB] = ACTIONS(1),
    [anon_sym_kilobyte] = ACTIONS(1),
    [anon_sym_kilobytes] = ACTIONS(1),
    [anon_sym_MB] = ACTIONS(1),
    [anon_sym_megabyte] = ACTIONS(1),
    [anon_sym_megabytes] = ACTIONS(1),
    [anon_sym_GB] = ACTIONS(1),
    [anon_sym_gigabyte] = ACTIONS(1),
    [anon_sym_gigabytes] = ACTIONS(1),
    [anon_sym_TB] = ACTIONS(1),
    [anon_sym_terabyte] = ACTIONS(1),
    [anon_sym_terabytes] = ACTIONS(1),
    [anon_sym_PB] = ACTIONS(1),
    [anon_sym_petabyte] = ACTIONS(1),
    [anon_sym_petabytes] = ACTIONS(1),
    [anon_sym_EB] = ACTIONS(1),
    [anon_sym_exabyte] = ACTIONS(1),
    [anon_sym_exabytes] = ACTIONS(1),
    [anon_sym_ZB] = ACTIONS(1),
    [anon_sym_zettabyte] = ACTIONS(1),
    [anon_sym_zettabytes] = ACTIONS(1),
    [anon_sym_YB] = ACTIONS(1),
    [anon_sym_yottabyte] = ACTIONS(1),
    [anon_sym_yottabytes] = ACTIONS(1),
    [anon_sym_K] = ACTIONS(1),
    [anon_sym_k] = ACTIONS(1),
    [anon_sym_Ki] = ACTIONS(1),
    [anon_sym_KiB] = ACTIONS(1),
    [anon_sym_kibibyte] = ACTIONS(1),
    [anon_sym_kibibytes] = ACTIONS(1),
    [anon_sym_M] = ACTIONS(1),
    [anon_sym_Mi] = ACTIONS(1),
    [anon_sym_MiB] = ACTIONS(1),
    [anon_sym_mebibyte] = ACTIONS(1),
    [anon_sym_mebibytes] = ACTIONS(1),
    [anon_sym_G] = ACTIONS(1),
    [anon_sym_g] = ACTIONS(1),
    [anon_sym_Gi] = ACTIONS(1),
    [anon_sym_GiB] = ACTIONS(1),
    [anon_sym_gibibyte] = ACTIONS(1),
    [anon_sym_gibibytes] = ACTIONS(1),
    [anon_sym_T] = ACTIONS(1),
    [anon_sym_t] = ACTIONS(1),
    [anon_sym_Ti] = ACTIONS(1),
    [anon_sym_TiB] = ACTIONS(1),
    [anon_sym_tebibyte] = ACTIONS(1),
    [anon_sym_tebibytes] = ACTIONS(1),
    [anon_sym_P] = ACTIONS(1),
    [anon_sym_p] = ACTIONS(1),
    [anon_sym_Pi] = ACTIONS(1),
    [anon_sym_PiB] = ACTIONS(1),
    [anon_sym_pebibyte] = ACTIONS(1),
    [anon_sym_pebibytes] = ACTIONS(1),
    [anon_sym_E] = ACTIONS(1),
    [anon_sym_e] = ACTIONS(1),
    [anon_sym_Ei] = ACTIONS(1),
    [anon_sym_EiB] = ACTIONS(1),
    [anon_sym_exbibyte] = ACTIONS(1),
    [anon_sym_exbibytes] = ACTIONS(1),
    [anon_sym_Z] = ACTIONS(1),
    [anon_sym_z] = ACTIONS(1),
    [anon_sym_Zi] = ACTIONS(1),
    [anon_sym_ZiB] = ACTIONS(1),
    [anon_sym_zebibyte] = ACTIONS(1),
    [anon_sym_zebibytes] = ACTIONS(1),
    [anon_sym_Y] = ACTIONS(1),
    [anon_sym_Yi] = ACTIONS(1),
    [anon_sym_YiB] = ACTIONS(1),
    [anon_sym_yobibyte] = ACTIONS(1),
    [anon_sym_yobibytes] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(83),
    [sym_object] = STATE(82),
    [sym_pair] = STATE(47),
    [sym_array] = STATE(82),
    [sym_string] = STATE(27),
    [sym__path] = STATE(27),
    [sym_include] = STATE(47),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_number] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [sym_unquoted_path] = ACTIONS(13),
    [anon_sym_include] = ACTIONS(15),
  },
  [2] = {
    [sym_unit] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(19),
    [anon_sym_LF] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(19),
    [anon_sym_RBRACK] = ACTIONS(19),
    [sym_comment] = ACTIONS(21),
    [anon_sym_ns] = ACTIONS(23),
    [anon_sym_nano] = ACTIONS(23),
    [anon_sym_nanos] = ACTIONS(23),
    [anon_sym_nanosecond] = ACTIONS(23),
    [anon_sym_nanoseconds] = ACTIONS(23),
    [anon_sym_us] = ACTIONS(23),
    [anon_sym_micro] = ACTIONS(23),
    [anon_sym_micros] = ACTIONS(23),
    [anon_sym_microsecond] = ACTIONS(23),
    [anon_sym_microseconds] = ACTIONS(23),
    [anon_sym_ms] = ACTIONS(23),
    [anon_sym_milli] = ACTIONS(23),
    [anon_sym_millis] = ACTIONS(23),
    [anon_sym_millisecond] = ACTIONS(23),
    [anon_sym_milliseconds] = ACTIONS(23),
    [anon_sym_s] = ACTIONS(23),
    [anon_sym_second] = ACTIONS(23),
    [anon_sym_seconds] = ACTIONS(23),
    [anon_sym_m] = ACTIONS(23),
    [anon_sym_minute] = ACTIONS(23),
    [anon_sym_minutes] = ACTIONS(23),
    [anon_sym_h] = ACTIONS(23),
    [anon_sym_hour] = ACTIONS(23),
    [anon_sym_hours] = ACTIONS(23),
    [anon_sym_d] = ACTIONS(23),
    [anon_sym_day] = ACTIONS(23),
    [anon_sym_days] = ACTIONS(23),
    [anon_sym_w] = ACTIONS(23),
    [anon_sym_week] = ACTIONS(23),
    [anon_sym_weeks] = ACTIONS(23),
    [anon_sym_mo] = ACTIONS(23),
    [anon_sym_month] = ACTIONS(23),
    [anon_sym_months] = ACTIONS(23),
    [anon_sym_y] = ACTIONS(23),
    [anon_sym_year] = ACTIONS(23),
    [anon_sym_years] = ACTIONS(23),
    [anon_sym_B] = ACTIONS(23),
    [anon_sym_b] = ACTIONS(23),
    [anon_sym_byte] = ACTIONS(23),
    [anon_sym_bytes] = ACTIONS(23),
    [anon_sym_kB] = ACTIONS(23),
    [anon_sym_kilobyte] = ACTIONS(23),
    [anon_sym_kilobytes] = ACTIONS(23),
    [anon_sym_MB] = ACTIONS(23),
    [anon_sym_megabyte] = ACTIONS(23),
    [anon_sym_megabytes] = ACTIONS(23),
    [anon_sym_GB] = ACTIONS(23),
    [anon_sym_gigabyte] = ACTIONS(23),
    [anon_sym_gigabytes] = ACTIONS(23),
    [anon_sym_TB] = ACTIONS(23),
    [anon_sym_terabyte] = ACTIONS(23),
    [anon_sym_terabytes] = ACTIONS(23),
    [anon_sym_PB] = ACTIONS(23),
    [anon_sym_petabyte] = ACTIONS(23),
    [anon_sym_petabytes] = ACTIONS(23),
    [anon_sym_EB] = ACTIONS(23),
    [anon_sym_exabyte] = ACTIONS(23),
    [anon_sym_exabytes] = ACTIONS(23),
    [anon_sym_ZB] = ACTIONS(23),
    [anon_sym_zettabyte] = ACTIONS(23),
    [anon_sym_zettabytes] = ACTIONS(23),
    [anon_sym_YB] = ACTIONS(23),
    [anon_sym_yottabyte] = ACTIONS(23),
    [anon_sym_yottabytes] = ACTIONS(23),
    [anon_sym_K] = ACTIONS(23),
    [anon_sym_k] = ACTIONS(23),
    [anon_sym_Ki] = ACTIONS(23),
    [anon_sym_KiB] = ACTIONS(23),
    [anon_sym_kibibyte] = ACTIONS(23),
    [anon_sym_kibibytes] = ACTIONS(23),
    [anon_sym_M] = ACTIONS(23),
    [anon_sym_Mi] = ACTIONS(23),
    [anon_sym_MiB] = ACTIONS(23),
    [anon_sym_mebibyte] = ACTIONS(23),
    [anon_sym_mebibytes] = ACTIONS(23),
    [anon_sym_G] = ACTIONS(23),
    [anon_sym_g] = ACTIONS(23),
    [anon_sym_Gi] = ACTIONS(23),
    [anon_sym_GiB] = ACTIONS(23),
    [anon_sym_gibibyte] = ACTIONS(23),
    [anon_sym_gibibytes] = ACTIONS(23),
    [anon_sym_T] = ACTIONS(23),
    [anon_sym_t] = ACTIONS(23),
    [anon_sym_Ti] = ACTIONS(23),
    [anon_sym_TiB] = ACTIONS(23),
    [anon_sym_tebibyte] = ACTIONS(23),
    [anon_sym_tebibytes] = ACTIONS(23),
    [anon_sym_P] = ACTIONS(23),
    [anon_sym_p] = ACTIONS(23),
    [anon_sym_Pi] = ACTIONS(23),
    [anon_sym_PiB] = ACTIONS(23),
    [anon_sym_pebibyte] = ACTIONS(23),
    [anon_sym_pebibytes] = ACTIONS(23),
    [anon_sym_E] = ACTIONS(23),
    [anon_sym_e] = ACTIONS(23),
    [anon_sym_Ei] = ACTIONS(23),
    [anon_sym_EiB] = ACTIONS(23),
    [anon_sym_exbibyte] = ACTIONS(23),
    [anon_sym_exbibytes] = ACTIONS(23),
    [anon_sym_Z] = ACTIONS(23),
    [anon_sym_z] = ACTIONS(23),
    [anon_sym_Zi] = ACTIONS(23),
    [anon_sym_ZiB] = ACTIONS(23),
    [anon_sym_zebibyte] = ACTIONS(23),
    [anon_sym_zebibytes] = ACTIONS(23),
    [anon_sym_Y] = ACTIONS(23),
    [anon_sym_Yi] = ACTIONS(23),
    [anon_sym_YiB] = ACTIONS(23),
    [anon_sym_yobibyte] = ACTIONS(23),
    [anon_sym_yobibytes] = ACTIONS(23),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_RBRACK,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(37), 1,
      sym_unquoted_string,
    ACTIONS(39), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_DOLLAR_LBRACE_QMARK,
    ACTIONS(43), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(12), 2,
      sym_substitution,
      aux_sym_unquoted_value_repeat1,
    ACTIONS(35), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(65), 6,
      sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_unquoted_value,
      sym_multiline_string,
  [48] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(37), 1,
      sym_unquoted_string,
    ACTIONS(39), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_DOLLAR_LBRACE_QMARK,
    ACTIONS(43), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(45), 1,
      anon_sym_RBRACK,
    STATE(12), 2,
      sym_substitution,
      aux_sym_unquoted_value_repeat1,
    ACTIONS(35), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(65), 6,
      sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_unquoted_value,
      sym_multiline_string,
  [96] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(37), 1,
      sym_unquoted_string,
    ACTIONS(39), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_DOLLAR_LBRACE_QMARK,
    ACTIONS(43), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(47), 1,
      anon_sym_RBRACK,
    STATE(12), 2,
      sym_substitution,
      aux_sym_unquoted_value_repeat1,
    ACTIONS(49), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(57), 6,
      sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_unquoted_value,
      sym_multiline_string,
  [144] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(37), 1,
      sym_unquoted_string,
    ACTIONS(39), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_DOLLAR_LBRACE_QMARK,
    ACTIONS(43), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(51), 1,
      anon_sym_RBRACK,
    STATE(12), 2,
      sym_substitution,
      aux_sym_unquoted_value_repeat1,
    ACTIONS(35), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(65), 6,
      sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_unquoted_value,
      sym_multiline_string,
  [192] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(37), 1,
      sym_unquoted_string,
    ACTIONS(39), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_DOLLAR_LBRACE_QMARK,
    ACTIONS(43), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(53), 1,
      anon_sym_RBRACK,
    STATE(12), 2,
      sym_substitution,
      aux_sym_unquoted_value_repeat1,
    ACTIONS(35), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(65), 6,
      sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_unquoted_value,
      sym_multiline_string,
  [240] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(37), 1,
      sym_unquoted_string,
    ACTIONS(39), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_DOLLAR_LBRACE_QMARK,
    ACTIONS(43), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(55), 1,
      anon_sym_RBRACK,
    STATE(12), 2,
      sym_substitution,
      aux_sym_unquoted_value_repeat1,
    ACTIONS(57), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(53), 6,
      sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_unquoted_value,
      sym_multiline_string,
  [288] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(37), 1,
      sym_unquoted_string,
    ACTIONS(39), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_DOLLAR_LBRACE_QMARK,
    ACTIONS(43), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(12), 2,
      sym_substitution,
      aux_sym_unquoted_value_repeat1,
    ACTIONS(35), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(65), 6,
      sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_unquoted_value,
      sym_multiline_string,
  [333] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(37), 1,
      sym_unquoted_string,
    ACTIONS(39), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_DOLLAR_LBRACE_QMARK,
    ACTIONS(43), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(12), 2,
      sym_substitution,
      aux_sym_unquoted_value_repeat1,
    ACTIONS(59), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(45), 6,
      sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_unquoted_value,
      sym_multiline_string,
  [378] = 6,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_unquoted_string,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(68), 2,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
    STATE(11), 2,
      sym_substitution,
      aux_sym_unquoted_value_repeat1,
    ACTIONS(63), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [402] = 6,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(75), 1,
      sym_unquoted_string,
    ACTIONS(43), 2,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(11), 2,
      sym_substitution,
      aux_sym_unquoted_value_repeat1,
    ACTIONS(73), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [426] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_include,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_number,
      sym_unquoted_path,
    STATE(27), 2,
      sym_string,
      sym__path,
    STATE(43), 2,
      sym_pair,
      sym_include,
  [451] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_include,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_number,
      sym_unquoted_path,
    STATE(27), 2,
      sym_string,
      sym__path,
    STATE(54), 2,
      sym_pair,
      sym_include,
  [476] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_include,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_number,
      sym_unquoted_path,
    STATE(27), 2,
      sym_string,
      sym__path,
    STATE(43), 2,
      sym_pair,
      sym_include,
  [501] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_include,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_number,
      sym_unquoted_path,
    STATE(27), 2,
      sym_string,
      sym__path,
    STATE(56), 2,
      sym_pair,
      sym_include,
  [526] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_include,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_number,
      sym_unquoted_path,
    STATE(27), 2,
      sym_string,
      sym__path,
    STATE(43), 2,
      sym_pair,
      sym_include,
  [551] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_include,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 2,
      sym_number,
      sym_unquoted_path,
    STATE(27), 2,
      sym_string,
      sym__path,
    STATE(43), 2,
      sym_pair,
      sym_include,
  [576] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_include,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_number,
      sym_unquoted_path,
    STATE(27), 2,
      sym_string,
      sym__path,
    STATE(43), 2,
      sym_pair,
      sym_include,
  [601] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_include,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 2,
      sym_number,
      sym_unquoted_path,
    STATE(27), 2,
      sym_string,
      sym__path,
    STATE(43), 2,
      sym_pair,
      sym_include,
  [626] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(93), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(95), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_unquoted_string,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
  [642] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_include,
    ACTIONS(13), 2,
      sym_number,
      sym_unquoted_path,
    STATE(27), 2,
      sym_string,
      sym__path,
    STATE(43), 2,
      sym_pair,
      sym_include,
  [664] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    ACTIONS(99), 1,
      anon_sym_required,
    STATE(62), 2,
      sym_string,
      sym__resource_name,
    ACTIONS(101), 3,
      anon_sym_url,
      anon_sym_file,
      anon_sym_classpath,
  [683] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_RPAREN,
  [695] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_RPAREN,
  [707] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    STATE(76), 2,
      sym_string,
      sym__resource_name,
    ACTIONS(107), 3,
      anon_sym_url,
      anon_sym_file,
      anon_sym_classpath,
  [723] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    STATE(10), 1,
      sym__separator,
    STATE(63), 1,
      sym_object,
    ACTIONS(109), 3,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
  [741] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(105), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(111), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [754] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(113), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(115), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [767] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(117), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(119), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [780] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(123), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [793] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(127), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [806] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(129), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(131), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [819] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(133), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(135), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [832] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(103), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(137), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [845] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(139), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(141), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [858] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(143), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(145), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [871] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(147), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(149), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [884] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(151), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(153), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [897] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 2,
      sym_number,
      sym_unquoted_path,
    STATE(80), 2,
      sym_string,
      sym__path,
  [912] = 6,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(157), 1,
      ts_builtin_sym_end,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    ACTIONS(162), 1,
      anon_sym_LF,
    ACTIONS(165), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      aux_sym_document_repeat1,
  [931] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(167), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(169), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [944] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(157), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(165), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [956] = 5,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_DQUOTE,
    ACTIONS(173), 1,
      aux_sym_string_content_token1,
    ACTIONS(175), 1,
      sym_escape_sequence,
    STATE(50), 1,
      aux_sym__string_content,
  [972] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(177), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(179), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [984] = 5,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_COMMA,
    ACTIONS(183), 1,
      anon_sym_LF,
    ACTIONS(185), 1,
      anon_sym_RBRACK,
    STATE(52), 1,
      aux_sym_array_repeat1,
  [1000] = 5,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    ACTIONS(191), 1,
      anon_sym_LF,
    STATE(64), 1,
      aux_sym_document_repeat1,
  [1016] = 5,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      aux_sym_string_content_token1,
    ACTIONS(198), 1,
      sym_escape_sequence,
    STATE(48), 1,
      aux_sym__string_content,
  [1032] = 5,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(203), 1,
      anon_sym_LF,
    ACTIONS(205), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      aux_sym_document_repeat1,
  [1048] = 5,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_DQUOTE,
    ACTIONS(209), 1,
      aux_sym_string_content_token1,
    ACTIONS(211), 1,
      sym_escape_sequence,
    STATE(48), 1,
      aux_sym__string_content,
  [1064] = 5,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    ACTIONS(215), 1,
      anon_sym_LF,
    ACTIONS(217), 1,
      anon_sym_RBRACK,
    STATE(52), 1,
      aux_sym_array_repeat1,
  [1080] = 5,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_COMMA,
    ACTIONS(222), 1,
      anon_sym_LF,
    ACTIONS(225), 1,
      anon_sym_RBRACK,
    STATE(52), 1,
      aux_sym_array_repeat1,
  [1096] = 5,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_COMMA,
    ACTIONS(229), 1,
      anon_sym_LF,
    ACTIONS(231), 1,
      anon_sym_RBRACK,
    STATE(46), 1,
      aux_sym_array_repeat1,
  [1112] = 5,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    ACTIONS(235), 1,
      anon_sym_LF,
    ACTIONS(237), 1,
      anon_sym_RBRACE,
    STATE(49), 1,
      aux_sym_document_repeat1,
  [1128] = 5,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_DQUOTE,
    ACTIONS(241), 1,
      aux_sym_string_content_token1,
    ACTIONS(243), 1,
      sym_escape_sequence,
    STATE(58), 1,
      aux_sym__string_content,
  [1144] = 5,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(247), 1,
      anon_sym_LF,
    ACTIONS(249), 1,
      anon_sym_RBRACE,
    STATE(61), 1,
      aux_sym_document_repeat1,
  [1160] = 5,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_COMMA,
    ACTIONS(253), 1,
      anon_sym_LF,
    ACTIONS(255), 1,
      anon_sym_RBRACK,
    STATE(51), 1,
      aux_sym_array_repeat1,
  [1176] = 5,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(209), 1,
      aux_sym_string_content_token1,
    ACTIONS(211), 1,
      sym_escape_sequence,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      aux_sym__string_content,
  [1192] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(259), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(261), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1204] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(263), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(265), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1216] = 5,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    ACTIONS(269), 1,
      anon_sym_LF,
    ACTIONS(271), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      aux_sym_document_repeat1,
  [1232] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(273), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(275), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1244] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(277), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(279), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1256] = 5,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(281), 1,
      anon_sym_COMMA,
    ACTIONS(283), 1,
      anon_sym_LF,
    STATE(41), 1,
      aux_sym_document_repeat1,
  [1272] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_LF,
    ACTIONS(225), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1283] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    STATE(84), 1,
      sym_string,
  [1293] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    STATE(75), 1,
      sym_string,
  [1303] = 2,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(287), 1,
      aux_sym_multiline_string_token1,
  [1310] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
  [1317] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
  [1324] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_RPAREN,
  [1331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
  [1338] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      ts_builtin_sym_end,
  [1345] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
  [1352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_RPAREN,
  [1359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_RPAREN,
  [1366] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_LPAREN,
  [1373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
  [1380] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
  [1387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_RBRACE,
  [1394] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
  [1401] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
  [1408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      ts_builtin_sym_end,
  [1415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_RPAREN,
  [1422] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_LPAREN,
  [1429] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 48,
  [SMALL_STATE(5)] = 96,
  [SMALL_STATE(6)] = 144,
  [SMALL_STATE(7)] = 192,
  [SMALL_STATE(8)] = 240,
  [SMALL_STATE(9)] = 288,
  [SMALL_STATE(10)] = 333,
  [SMALL_STATE(11)] = 378,
  [SMALL_STATE(12)] = 402,
  [SMALL_STATE(13)] = 426,
  [SMALL_STATE(14)] = 451,
  [SMALL_STATE(15)] = 476,
  [SMALL_STATE(16)] = 501,
  [SMALL_STATE(17)] = 526,
  [SMALL_STATE(18)] = 551,
  [SMALL_STATE(19)] = 576,
  [SMALL_STATE(20)] = 601,
  [SMALL_STATE(21)] = 626,
  [SMALL_STATE(22)] = 642,
  [SMALL_STATE(23)] = 664,
  [SMALL_STATE(24)] = 683,
  [SMALL_STATE(25)] = 695,
  [SMALL_STATE(26)] = 707,
  [SMALL_STATE(27)] = 723,
  [SMALL_STATE(28)] = 741,
  [SMALL_STATE(29)] = 754,
  [SMALL_STATE(30)] = 767,
  [SMALL_STATE(31)] = 780,
  [SMALL_STATE(32)] = 793,
  [SMALL_STATE(33)] = 806,
  [SMALL_STATE(34)] = 819,
  [SMALL_STATE(35)] = 832,
  [SMALL_STATE(36)] = 845,
  [SMALL_STATE(37)] = 858,
  [SMALL_STATE(38)] = 871,
  [SMALL_STATE(39)] = 884,
  [SMALL_STATE(40)] = 897,
  [SMALL_STATE(41)] = 912,
  [SMALL_STATE(42)] = 931,
  [SMALL_STATE(43)] = 944,
  [SMALL_STATE(44)] = 956,
  [SMALL_STATE(45)] = 972,
  [SMALL_STATE(46)] = 984,
  [SMALL_STATE(47)] = 1000,
  [SMALL_STATE(48)] = 1016,
  [SMALL_STATE(49)] = 1032,
  [SMALL_STATE(50)] = 1048,
  [SMALL_STATE(51)] = 1064,
  [SMALL_STATE(52)] = 1080,
  [SMALL_STATE(53)] = 1096,
  [SMALL_STATE(54)] = 1112,
  [SMALL_STATE(55)] = 1128,
  [SMALL_STATE(56)] = 1144,
  [SMALL_STATE(57)] = 1160,
  [SMALL_STATE(58)] = 1176,
  [SMALL_STATE(59)] = 1192,
  [SMALL_STATE(60)] = 1204,
  [SMALL_STATE(61)] = 1216,
  [SMALL_STATE(62)] = 1232,
  [SMALL_STATE(63)] = 1244,
  [SMALL_STATE(64)] = 1256,
  [SMALL_STATE(65)] = 1272,
  [SMALL_STATE(66)] = 1283,
  [SMALL_STATE(67)] = 1293,
  [SMALL_STATE(68)] = 1303,
  [SMALL_STATE(69)] = 1310,
  [SMALL_STATE(70)] = 1317,
  [SMALL_STATE(71)] = 1324,
  [SMALL_STATE(72)] = 1331,
  [SMALL_STATE(73)] = 1338,
  [SMALL_STATE(74)] = 1345,
  [SMALL_STATE(75)] = 1352,
  [SMALL_STATE(76)] = 1359,
  [SMALL_STATE(77)] = 1366,
  [SMALL_STATE(78)] = 1373,
  [SMALL_STATE(79)] = 1380,
  [SMALL_STATE(80)] = 1387,
  [SMALL_STATE(81)] = 1394,
  [SMALL_STATE(82)] = 1401,
  [SMALL_STATE(83)] = 1408,
  [SMALL_STATE(84)] = 1415,
  [SMALL_STATE(85)] = 1422,
  [SMALL_STATE(86)] = 1429,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_value_repeat1, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_value_repeat1, 2),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_value_repeat1, 2), SHIFT_REPEAT(11),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_value_repeat1, 2), SHIFT_REPEAT(40),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_value, 1),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_value, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitution, 3),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substitution, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 5),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 5),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 4),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(22),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(22),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 5),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 5),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, .production_id = 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pair, 3, .production_id = 1),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_content, 2),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_content, 2), SHIFT_REPEAT(48),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_content, 2), SHIFT_REPEAT(48),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [219] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(9),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(9),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 5),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 5),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__resource_name, 4),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__resource_name, 4),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 2, .production_id = 1),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pair, 2, .production_id = 1),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [297] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
