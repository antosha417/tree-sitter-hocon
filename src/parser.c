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
#define STATE_COUNT 110
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 163
#define ALIAS_COUNT 0
#define TOKEN_COUNT 143
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
  anon_sym_PLUS_EQ = 17,
  sym_unquoted_string = 18,
  aux_sym_unquoted_path_token1 = 19,
  anon_sym_DOT = 20,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 21,
  aux_sym_multiline_string_token1 = 22,
  anon_sym_DOLLAR_LBRACE_QMARK = 23,
  anon_sym_DOLLAR_LBRACE = 24,
  anon_sym_include = 25,
  anon_sym_required = 26,
  anon_sym_LPAREN = 27,
  anon_sym_RPAREN = 28,
  anon_sym_url = 29,
  anon_sym_file = 30,
  anon_sym_classpath = 31,
  anon_sym_DOT2 = 32,
  anon_sym_ns = 33,
  anon_sym_nano = 34,
  anon_sym_nanos = 35,
  anon_sym_nanosecond = 36,
  anon_sym_nanoseconds = 37,
  anon_sym_us = 38,
  anon_sym_micro = 39,
  anon_sym_micros = 40,
  anon_sym_microsecond = 41,
  anon_sym_microseconds = 42,
  anon_sym_ms = 43,
  anon_sym_milli = 44,
  anon_sym_millis = 45,
  anon_sym_millisecond = 46,
  anon_sym_milliseconds = 47,
  anon_sym_s = 48,
  anon_sym_second = 49,
  anon_sym_seconds = 50,
  anon_sym_m = 51,
  anon_sym_minute = 52,
  anon_sym_minutes = 53,
  anon_sym_h = 54,
  anon_sym_hour = 55,
  anon_sym_hours = 56,
  anon_sym_d = 57,
  anon_sym_day = 58,
  anon_sym_days = 59,
  anon_sym_w = 60,
  anon_sym_week = 61,
  anon_sym_weeks = 62,
  anon_sym_mo = 63,
  anon_sym_month = 64,
  anon_sym_months = 65,
  anon_sym_y = 66,
  anon_sym_year = 67,
  anon_sym_years = 68,
  anon_sym_B = 69,
  anon_sym_b = 70,
  anon_sym_byte = 71,
  anon_sym_bytes = 72,
  anon_sym_kB = 73,
  anon_sym_kilobyte = 74,
  anon_sym_kilobytes = 75,
  anon_sym_MB = 76,
  anon_sym_megabyte = 77,
  anon_sym_megabytes = 78,
  anon_sym_GB = 79,
  anon_sym_gigabyte = 80,
  anon_sym_gigabytes = 81,
  anon_sym_TB = 82,
  anon_sym_terabyte = 83,
  anon_sym_terabytes = 84,
  anon_sym_PB = 85,
  anon_sym_petabyte = 86,
  anon_sym_petabytes = 87,
  anon_sym_EB = 88,
  anon_sym_exabyte = 89,
  anon_sym_exabytes = 90,
  anon_sym_ZB = 91,
  anon_sym_zettabyte = 92,
  anon_sym_zettabytes = 93,
  anon_sym_YB = 94,
  anon_sym_yottabyte = 95,
  anon_sym_yottabytes = 96,
  anon_sym_K = 97,
  anon_sym_k = 98,
  anon_sym_Ki = 99,
  anon_sym_KiB = 100,
  anon_sym_kibibyte = 101,
  anon_sym_kibibytes = 102,
  anon_sym_M = 103,
  anon_sym_Mi = 104,
  anon_sym_MiB = 105,
  anon_sym_mebibyte = 106,
  anon_sym_mebibytes = 107,
  anon_sym_G = 108,
  anon_sym_g = 109,
  anon_sym_Gi = 110,
  anon_sym_GiB = 111,
  anon_sym_gibibyte = 112,
  anon_sym_gibibytes = 113,
  anon_sym_T = 114,
  anon_sym_t = 115,
  anon_sym_Ti = 116,
  anon_sym_TiB = 117,
  anon_sym_tebibyte = 118,
  anon_sym_tebibytes = 119,
  anon_sym_P = 120,
  anon_sym_p = 121,
  anon_sym_Pi = 122,
  anon_sym_PiB = 123,
  anon_sym_pebibyte = 124,
  anon_sym_pebibytes = 125,
  anon_sym_E = 126,
  anon_sym_e = 127,
  anon_sym_Ei = 128,
  anon_sym_EiB = 129,
  anon_sym_exbibyte = 130,
  anon_sym_exbibytes = 131,
  anon_sym_Z = 132,
  anon_sym_z = 133,
  anon_sym_Zi = 134,
  anon_sym_ZiB = 135,
  anon_sym_zebibyte = 136,
  anon_sym_zebibytes = 137,
  anon_sym_Y = 138,
  anon_sym_Yi = 139,
  anon_sym_YiB = 140,
  anon_sym_yobibyte = 141,
  anon_sym_yobibytes = 142,
  sym_document = 143,
  aux_sym__value = 144,
  sym_object = 145,
  sym_pair = 146,
  sym_array = 147,
  sym_string = 148,
  sym_path = 149,
  sym_value = 150,
  sym__pair_separator = 151,
  aux_sym__string_content = 152,
  sym_unquoted_path = 153,
  sym_multiline_string = 154,
  sym_substitution = 155,
  sym_include = 156,
  sym__resource_name = 157,
  sym_unit = 158,
  aux_sym_document_repeat1 = 159,
  aux_sym_array_repeat1 = 160,
  aux_sym_path_repeat1 = 161,
  aux_sym_unquoted_path_repeat1 = 162,
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
  [aux_sym_unquoted_path_token1] = "unquoted_path_token1",
  [anon_sym_DOT] = ".",
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
  [anon_sym_DOT2] = ".",
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
  [aux_sym__value] = "_value",
  [sym_object] = "object",
  [sym_pair] = "pair",
  [sym_array] = "array",
  [sym_string] = "string",
  [sym_path] = "path",
  [sym_value] = "value",
  [sym__pair_separator] = "_pair_separator",
  [aux_sym__string_content] = "_string_content",
  [sym_unquoted_path] = "unquoted_path",
  [sym_multiline_string] = "multiline_string",
  [sym_substitution] = "substitution",
  [sym_include] = "include",
  [sym__resource_name] = "_resource_name",
  [sym_unit] = "unit",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
  [aux_sym_unquoted_path_repeat1] = "unquoted_path_repeat1",
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
  [aux_sym_unquoted_path_token1] = aux_sym_unquoted_path_token1,
  [anon_sym_DOT] = anon_sym_DOT,
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
  [anon_sym_DOT2] = anon_sym_DOT,
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
  [aux_sym__value] = aux_sym__value,
  [sym_object] = sym_object,
  [sym_pair] = sym_pair,
  [sym_array] = sym_array,
  [sym_string] = sym_string,
  [sym_path] = sym_path,
  [sym_value] = sym_value,
  [sym__pair_separator] = sym__pair_separator,
  [aux_sym__string_content] = aux_sym__string_content,
  [sym_unquoted_path] = sym_unquoted_path,
  [sym_multiline_string] = sym_multiline_string,
  [sym_substitution] = sym_substitution,
  [sym_include] = sym_include,
  [sym__resource_name] = sym__resource_name,
  [sym_unit] = sym_unit,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
  [aux_sym_unquoted_path_repeat1] = aux_sym_unquoted_path_repeat1,
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
  [aux_sym_unquoted_path_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
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
  [anon_sym_DOT2] = {
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
  [aux_sym__value] = {
    .visible = false,
    .named = false,
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
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym__pair_separator] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__string_content] = {
    .visible = false,
    .named = false,
  },
  [sym_unquoted_path] = {
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
  [aux_sym_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unquoted_path_repeat1] = {
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
  return (c < '='
    ? (c < '&'
      ? (c < '!'
        ? c == 0
        : c <= '!')
      : (c <= '&' || (c >= '*' && c <= ':')))
    : (c <= '=' || (c < '`'
      ? (c < '\\'
        ? c == '?'
        : c <= '^')
      : (c <= '`' || c == '}'))));
}

static inline bool sym_unquoted_string_character_set_2(int32_t c) {
  return (c < ':'
    ? (c < '&'
      ? (c < '\n'
        ? c == 0
        : (c <= '\n' || (c >= ' ' && c <= '$')))
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

static inline bool sym_unquoted_string_character_set_3(int32_t c) {
  return (c < '='
    ? (c < '&'
      ? (c < '\n'
        ? c == 0
        : (c <= '\n' || (c >= ' ' && c <= '$')))
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

static inline bool sym_unquoted_string_character_set_4(int32_t c) {
  return (c < '?'
    ? (c < '&'
      ? (c < ' '
        ? c == 0
        : c <= '$')
      : (c <= '&' || (c < '='
        ? (c >= '*' && c <= ':')
        : c <= '=')))
    : (c <= '?' || (c < '{'
      ? (c < '`'
        ? (c >= '[' && c <= '^')
        : c <= '`')
      : (c <= '{' || c == '}'))));
}

static inline bool sym_unquoted_string_character_set_5(int32_t c) {
  return (c < '='
    ? (c < ' '
      ? (c < '\n'
        ? c == 0
        : c <= '\n')
      : (c <= '$' || (c < '*'
        ? c == '&'
        : c <= ':')))
    : (c <= '=' || (c < '`'
      ? (c < '['
        ? c == '?'
        : c <= '^')
      : (c <= '`' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool aux_sym_unquoted_path_token1_character_set_1(int32_t c) {
  return (c < ':'
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= '$' || (c < '*'
        ? c == '&'
        : (c <= ',' || (c >= '.' && c <= '/')))))
    : (c <= ':' || (c < '`'
      ? (c < '?'
        ? c == '='
        : (c <= '?' || (c >= '[' && c <= '^')))
      : (c <= '`' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool aux_sym_unquoted_path_token1_character_set_2(int32_t c) {
  return (c < ':'
    ? (c < '&'
      ? (c < '\n'
        ? c == 0
        : (c <= '\n' || (c >= '!' && c <= '$')))
      : (c <= '&' || (c < '.'
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

static inline bool aux_sym_unquoted_path_token1_character_set_3(int32_t c) {
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

static inline bool aux_sym_unquoted_path_token1_character_set_4(int32_t c) {
  return (c < ':'
    ? (c < '&'
      ? (c < '\n'
        ? c == 0
        : (c <= '\n' || (c >= '!' && c <= '$')))
      : (c <= '&' || (c < '.'
        ? (c >= '*' && c <= ',')
        : c <= '.')))
    : (c <= ':' || (c < '`'
      ? (c < '?'
        ? c == '='
        : (c <= '?' || (c >= '[' && c <= '^')))
      : (c <= '`' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool aux_sym_unquoted_path_token1_character_set_5(int32_t c) {
  return (c < '='
    ? (c < '&'
      ? (c < '\n'
        ? c == 0
        : (c <= '\n' || (c >= '!' && c <= '$')))
      : (c <= '&' || (c < '.'
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

static inline bool aux_sym_unquoted_path_token1_character_set_6(int32_t c) {
  return (c < '='
    ? (c < '!'
      ? (c < '\n'
        ? c == 0
        : c <= '\n')
      : (c <= '$' || (c < '*'
        ? c == '&'
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
      if (eof) ADVANCE(191);
      if (lookahead == '"') ADVANCE(201);
      if (lookahead == '#') ADVANCE(234);
      if (lookahead == '$') ADVANCE(178);
      if (lookahead == '(') ADVANCE(422);
      if (lookahead == ')') ADVANCE(423);
      if (lookahead == '+') ADVANCE(15);
      if (lookahead == ',') ADVANCE(192);
      if (lookahead == '.') ADVANCE(413);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ':') ADVANCE(235);
      if (lookahead == '=') ADVANCE(236);
      if (lookahead == 'B') ADVANCE(500);
      if (lookahead == 'E') ADVANCE(615);
      if (lookahead == 'G') ADVANCE(579);
      if (lookahead == 'K') ADVANCE(557);
      if (lookahead == 'M') ADVANCE(569);
      if (lookahead == 'P') ADVANCE(603);
      if (lookahead == 'T') ADVANCE(591);
      if (lookahead == 'Y') ADVANCE(639);
      if (lookahead == 'Z') ADVANCE(627);
      if (lookahead == '[') ADVANCE(198);
      if (lookahead == '\\') ADVANCE(180);
      if (lookahead == ']') ADVANCE(199);
      if (lookahead == 'b') ADVANCE(503);
      if (lookahead == 'c') ADVANCE(102);
      if (lookahead == 'd') ADVANCE(477);
      if (lookahead == 'e') ADVANCE(617);
      if (lookahead == 'f') ADVANCE(18);
      if (lookahead == 'g') ADVANCE(581);
      if (lookahead == 'h') ADVANCE(471);
      if (lookahead == 'i') ADVANCE(110);
      if (lookahead == 'k') ADVANCE(559);
      if (lookahead == 'm') ADVANCE(465);
      if (lookahead == 'n') ADVANCE(19);
      if (lookahead == 'p') ADVANCE(605);
      if (lookahead == 'r') ADVANCE(63);
      if (lookahead == 's') ADVANCE(459);
      if (lookahead == 't') ADVANCE(593);
      if (lookahead == 'u') ADVANCE(129);
      if (lookahead == 'w') ADVANCE(483);
      if (lookahead == 'y') ADVANCE(495);
      if (lookahead == 'z') ADVANCE(629);
      if (lookahead == '{') ADVANCE(196);
      if (lookahead == '}') ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(189)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '"') ADVANCE(200);
      if (lookahead == '#') ADVANCE(204);
      if (lookahead == '/') ADVANCE(203);
      if (lookahead == '\\') ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(202);
      if (lookahead != 0) ADVANCE(205);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(201);
      if (lookahead == '#') ADVANCE(234);
      if (lookahead == '$') ADVANCE(178);
      if (lookahead == '+') ADVANCE(14);
      if (lookahead == '-') ADVANCE(243);
      if (lookahead == '.') ADVANCE(384);
      if (lookahead == '/') ADVANCE(242);
      if (lookahead == '0') ADVANCE(211);
      if (lookahead == '[') ADVANCE(198);
      if (lookahead == ']') ADVANCE(199);
      if (lookahead == 'f') ADVANCE(244);
      if (lookahead == 'n') ADVANCE(362);
      if (lookahead == 't') ADVANCE(336);
      if (lookahead == '{') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(241);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(387);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(414);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(200);
      if (lookahead == '#') ADVANCE(234);
      if (lookahead == ')') ADVANCE(423);
      if (lookahead == '+') ADVANCE(15);
      if (lookahead == '.') ADVANCE(413);
      if (lookahead == '/') ADVANCE(389);
      if (lookahead == ':') ADVANCE(235);
      if (lookahead == '=') ADVANCE(236);
      if (lookahead == 'i') ADVANCE(406);
      if (lookahead == '{') ADVANCE(196);
      if (lookahead == '}') ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(200);
      if (lookahead == '#') ADVANCE(234);
      if (lookahead == ')') ADVANCE(423);
      if (lookahead == '+') ADVANCE(15);
      if (lookahead == '/') ADVANCE(389);
      if (lookahead == ':') ADVANCE(235);
      if (lookahead == '=') ADVANCE(236);
      if (lookahead == 'i') ADVANCE(406);
      if (lookahead == '{') ADVANCE(196);
      if (lookahead == '}') ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(200);
      if (lookahead == '#') ADVANCE(234);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'c') ADVANCE(102);
      if (lookahead == 'f') ADVANCE(91);
      if (lookahead == 'r') ADVANCE(63);
      if (lookahead == 'u') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(200);
      if (lookahead == '#') ADVANCE(234);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '/') ADVANCE(233);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(415);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(11);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(234);
      END_STATE();
    case 14:
      if (lookahead == '0') ADVANCE(209);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(210);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(237);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(28);
      if (lookahead == 'b') ADVANCE(93);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(105);
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(111);
      if (lookahead == 's') ADVANCE(428);
      if (lookahead == 'u') ADVANCE(109);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(126);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 28:
      if (lookahead == 'b') ADVANCE(162);
      END_STATE();
    case 29:
      if (lookahead == 'b') ADVANCE(163);
      END_STATE();
    case 30:
      if (lookahead == 'b') ADVANCE(164);
      END_STATE();
    case 31:
      if (lookahead == 'b') ADVANCE(165);
      END_STATE();
    case 32:
      if (lookahead == 'b') ADVANCE(166);
      END_STATE();
    case 33:
      if (lookahead == 'b') ADVANCE(167);
      END_STATE();
    case 34:
      if (lookahead == 'b') ADVANCE(168);
      END_STATE();
    case 35:
      if (lookahead == 'b') ADVANCE(169);
      END_STATE();
    case 36:
      if (lookahead == 'b') ADVANCE(170);
      END_STATE();
    case 37:
      if (lookahead == 'b') ADVANCE(171);
      END_STATE();
    case 38:
      if (lookahead == 'b') ADVANCE(172);
      END_STATE();
    case 39:
      if (lookahead == 'b') ADVANCE(173);
      END_STATE();
    case 40:
      if (lookahead == 'b') ADVANCE(174);
      END_STATE();
    case 41:
      if (lookahead == 'b') ADVANCE(175);
      END_STATE();
    case 42:
      if (lookahead == 'b') ADVANCE(176);
      END_STATE();
    case 43:
      if (lookahead == 'b') ADVANCE(177);
      END_STATE();
    case 44:
      if (lookahead == 'b') ADVANCE(94);
      if (lookahead == 'g') ADVANCE(22);
      END_STATE();
    case 45:
      if (lookahead == 'b') ADVANCE(95);
      if (lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 46:
      if (lookahead == 'b') ADVANCE(96);
      if (lookahead == 'g') ADVANCE(23);
      END_STATE();
    case 47:
      if (lookahead == 'b') ADVANCE(97);
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 48:
      if (lookahead == 'b') ADVANCE(98);
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 49:
      if (lookahead == 'b') ADVANCE(99);
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 50:
      if (lookahead == 'b') ADVANCE(100);
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(127);
      if (lookahead == 'l') ADVANCE(106);
      if (lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(118);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(119);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(108);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(120);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(121);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(461);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(421);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(435);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(445);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(455);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(71);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(505);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(425);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(467);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(541);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(419);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(623);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(587);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(523);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(565);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(511);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(575);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(517);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(611);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(535);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(599);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(529);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(645);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(635);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(553);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(547);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 88:
      if (lookahead == 'h') ADVANCE(491);
      END_STATE();
    case 89:
      if (lookahead == 'h') ADVANCE(426);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(451);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 101:
      if (lookahead == 'k') ADVANCE(485);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(424);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(229);
      END_STATE();
    case 105:
      if (lookahead == 'l') ADVANCE(133);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(157);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(431);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(441);
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
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 122:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 123:
      if (lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 124:
      if (lookahead == 'q') ADVANCE(158);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(473);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(497);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(103);
      if (lookahead == 's') ADVANCE(438);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 131:
      if (lookahead == 's') ADVANCE(123);
      END_STATE();
    case 132:
      if (lookahead == 's') ADVANCE(131);
      END_STATE();
    case 133:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 154:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 155:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 156:
      if (lookahead == 'u') ADVANCE(125);
      END_STATE();
    case 157:
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 158:
      if (lookahead == 'u') ADVANCE(92);
      END_STATE();
    case 159:
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 160:
      if (lookahead == 'u') ADVANCE(137);
      END_STATE();
    case 161:
      if (lookahead == 'y') ADVANCE(479);
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
      if (lookahead == '{') ADVANCE(418);
      END_STATE();
    case 179:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 180:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(206);
      END_STATE();
    case 181:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(223);
      END_STATE();
    case 182:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 183:
      if (!aux_sym_unquoted_path_token1_character_set_1(lookahead)) ADVANCE(400);
      END_STATE();
    case 184:
      if (!sym_unquoted_string_character_set_2(lookahead)) ADVANCE(387);
      END_STATE();
    case 185:
      if (!aux_sym_unquoted_path_token1_character_set_2(lookahead)) ADVANCE(400);
      END_STATE();
    case 186:
      if (eof) ADVANCE(191);
      if (lookahead == '\n') ADVANCE(193);
      if (lookahead == ' ') SKIP(186)
      if (lookahead == '"') ADVANCE(201);
      if (lookahead == '#') ADVANCE(234);
      if (lookahead == '$') ADVANCE(178);
      if (lookahead == '+') ADVANCE(14);
      if (lookahead == ',') ADVANCE(192);
      if (lookahead == '-') ADVANCE(243);
      if (lookahead == '.') ADVANCE(384);
      if (lookahead == '/') ADVANCE(242);
      if (lookahead == '0') ADVANCE(211);
      if (lookahead == 'B') ADVANCE(501);
      if (lookahead == 'E') ADVANCE(614);
      if (lookahead == 'G') ADVANCE(578);
      if (lookahead == 'K') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(568);
      if (lookahead == 'P') ADVANCE(602);
      if (lookahead == 'T') ADVANCE(590);
      if (lookahead == 'Y') ADVANCE(638);
      if (lookahead == 'Z') ADVANCE(626);
      if (lookahead == '[') ADVANCE(198);
      if (lookahead == ']') ADVANCE(199);
      if (lookahead == 'b') ADVANCE(502);
      if (lookahead == 'd') ADVANCE(476);
      if (lookahead == 'e') ADVANCE(616);
      if (lookahead == 'f') ADVANCE(244);
      if (lookahead == 'g') ADVANCE(580);
      if (lookahead == 'h') ADVANCE(470);
      if (lookahead == 'k') ADVANCE(558);
      if (lookahead == 'm') ADVANCE(464);
      if (lookahead == 'n') ADVANCE(245);
      if (lookahead == 'p') ADVANCE(604);
      if (lookahead == 's') ADVANCE(458);
      if (lookahead == 't') ADVANCE(592);
      if (lookahead == 'u') ADVANCE(338);
      if (lookahead == 'w') ADVANCE(482);
      if (lookahead == 'y') ADVANCE(494);
      if (lookahead == 'z') ADVANCE(628);
      if (lookahead == '{') ADVANCE(196);
      if (lookahead == '}') ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(238);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '&' &&
          (lookahead < '*' || ':' < lookahead) &&
          lookahead != '=' &&
          lookahead != '?' &&
          (lookahead < '\\' || '^' < lookahead) &&
          lookahead != '`') ADVANCE(387);
      END_STATE();
    case 187:
      if (eof) ADVANCE(191);
      if (lookahead == '\n') ADVANCE(194);
      if (lookahead == '#') ADVANCE(234);
      if (lookahead == ',') ADVANCE(192);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ']') ADVANCE(199);
      if (lookahead == '}') ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(187)
      END_STATE();
    case 188:
      if (eof) ADVANCE(191);
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead == ' ') SKIP(188)
      if (lookahead == '"') ADVANCE(201);
      if (lookahead == '#') ADVANCE(234);
      if (lookahead == '$') ADVANCE(178);
      if (lookahead == '+') ADVANCE(14);
      if (lookahead == ',') ADVANCE(192);
      if (lookahead == '-') ADVANCE(243);
      if (lookahead == '.') ADVANCE(384);
      if (lookahead == '/') ADVANCE(242);
      if (lookahead == '0') ADVANCE(211);
      if (lookahead == '[') ADVANCE(198);
      if (lookahead == ']') ADVANCE(199);
      if (lookahead == 'f') ADVANCE(244);
      if (lookahead == 'n') ADVANCE(362);
      if (lookahead == 't') ADVANCE(336);
      if (lookahead == '{') ADVANCE(196);
      if (lookahead == '}') ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(239);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '&' &&
          (lookahead < '*' || ':' < lookahead) &&
          lookahead != '=' &&
          lookahead != '?' &&
          (lookahead < '\\' || '^' < lookahead) &&
          lookahead != '`') ADVANCE(387);
      END_STATE();
    case 189:
      if (eof) ADVANCE(191);
      if (lookahead == '"') ADVANCE(201);
      if (lookahead == '#') ADVANCE(234);
      if (lookahead == '$') ADVANCE(178);
      if (lookahead == '(') ADVANCE(422);
      if (lookahead == ')') ADVANCE(423);
      if (lookahead == '+') ADVANCE(15);
      if (lookahead == ',') ADVANCE(192);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ':') ADVANCE(235);
      if (lookahead == '=') ADVANCE(236);
      if (lookahead == 'B') ADVANCE(500);
      if (lookahead == 'E') ADVANCE(615);
      if (lookahead == 'G') ADVANCE(579);
      if (lookahead == 'K') ADVANCE(557);
      if (lookahead == 'M') ADVANCE(569);
      if (lookahead == 'P') ADVANCE(603);
      if (lookahead == 'T') ADVANCE(591);
      if (lookahead == 'Y') ADVANCE(639);
      if (lookahead == 'Z') ADVANCE(627);
      if (lookahead == '[') ADVANCE(198);
      if (lookahead == ']') ADVANCE(199);
      if (lookahead == 'b') ADVANCE(503);
      if (lookahead == 'c') ADVANCE(102);
      if (lookahead == 'd') ADVANCE(477);
      if (lookahead == 'e') ADVANCE(617);
      if (lookahead == 'f') ADVANCE(18);
      if (lookahead == 'g') ADVANCE(581);
      if (lookahead == 'h') ADVANCE(471);
      if (lookahead == 'i') ADVANCE(110);
      if (lookahead == 'k') ADVANCE(559);
      if (lookahead == 'm') ADVANCE(465);
      if (lookahead == 'n') ADVANCE(19);
      if (lookahead == 'p') ADVANCE(605);
      if (lookahead == 'r') ADVANCE(63);
      if (lookahead == 's') ADVANCE(459);
      if (lookahead == 't') ADVANCE(593);
      if (lookahead == 'u') ADVANCE(129);
      if (lookahead == 'w') ADVANCE(483);
      if (lookahead == 'y') ADVANCE(495);
      if (lookahead == 'z') ADVANCE(629);
      if (lookahead == '{') ADVANCE(196);
      if (lookahead == '}') ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(189)
      END_STATE();
    case 190:
      if (eof) ADVANCE(191);
      if (lookahead == '"') ADVANCE(200);
      if (lookahead == '#') ADVANCE(234);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(14);
      if (lookahead == '.') ADVANCE(181);
      if (lookahead == '/') ADVANCE(389);
      if (lookahead == '0') ADVANCE(207);
      if (lookahead == '[') ADVANCE(198);
      if (lookahead == 'i') ADVANCE(405);
      if (lookahead == '{') ADVANCE(196);
      if (lookahead == '}') ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(190)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(238);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(239);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(3);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '#') ADVANCE(204);
      if (lookahead == '/') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(205);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(205);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(223);
      if (lookahead == '/') ADVANCE(185);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(396);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(388);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(397);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(399);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(400);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(223);
      if (lookahead == '/') ADVANCE(185);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(400);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(223);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(223);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(218);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(382);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(240);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(383);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(386);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(218);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(218);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(240);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '/') ADVANCE(185);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(214);
      if (!aux_sym_unquoted_path_token1_character_set_4(lookahead)) ADVANCE(400);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '/') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(215);
      if (!aux_sym_unquoted_path_token1_character_set_4(lookahead)) ADVANCE(400);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '/') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      if (!aux_sym_unquoted_path_token1_character_set_5(lookahead)) ADVANCE(400);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '/') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(217);
      if (!aux_sym_unquoted_path_token1_character_set_5(lookahead)) ADVANCE(400);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(219);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '/') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(220);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '/') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '/') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(222);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == '/') ADVANCE(184);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == '/') ADVANCE(184);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_null);
      if (lookahead == '/') ADVANCE(184);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == '"') ADVANCE(416);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == '"') ADVANCE(231);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == '"') ADVANCE(232);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\n') ADVANCE(193);
      if (lookahead == '-') ADVANCE(243);
      if (lookahead == '.') ADVANCE(384);
      if (lookahead == '/') ADVANCE(242);
      if (lookahead == '0') ADVANCE(211);
      if (lookahead == 'B') ADVANCE(501);
      if (lookahead == 'E') ADVANCE(614);
      if (lookahead == 'G') ADVANCE(578);
      if (lookahead == 'K') ADVANCE(556);
      if (lookahead == 'M') ADVANCE(568);
      if (lookahead == 'P') ADVANCE(602);
      if (lookahead == 'T') ADVANCE(590);
      if (lookahead == 'Y') ADVANCE(638);
      if (lookahead == 'Z') ADVANCE(626);
      if (lookahead == 'b') ADVANCE(502);
      if (lookahead == 'd') ADVANCE(476);
      if (lookahead == 'e') ADVANCE(616);
      if (lookahead == 'f') ADVANCE(244);
      if (lookahead == 'g') ADVANCE(580);
      if (lookahead == 'h') ADVANCE(470);
      if (lookahead == 'k') ADVANCE(558);
      if (lookahead == 'm') ADVANCE(464);
      if (lookahead == 'n') ADVANCE(245);
      if (lookahead == 'p') ADVANCE(604);
      if (lookahead == 's') ADVANCE(458);
      if (lookahead == 't') ADVANCE(592);
      if (lookahead == 'u') ADVANCE(338);
      if (lookahead == 'w') ADVANCE(482);
      if (lookahead == 'y') ADVANCE(494);
      if (lookahead == 'z') ADVANCE(628);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(238);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if (!sym_unquoted_string_character_set_4(lookahead)) ADVANCE(387);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead == '-') ADVANCE(243);
      if (lookahead == '.') ADVANCE(384);
      if (lookahead == '/') ADVANCE(242);
      if (lookahead == '0') ADVANCE(211);
      if (lookahead == 'f') ADVANCE(244);
      if (lookahead == 'n') ADVANCE(362);
      if (lookahead == 't') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(239);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if (!sym_unquoted_string_character_set_4(lookahead)) ADVANCE(387);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '+') ADVANCE(182);
      if (lookahead == '-') ADVANCE(385);
      if (lookahead == '/') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '-') ADVANCE(243);
      if (lookahead == '.') ADVANCE(384);
      if (lookahead == '/') ADVANCE(242);
      if (lookahead == '0') ADVANCE(211);
      if (lookahead == 'f') ADVANCE(244);
      if (lookahead == 'n') ADVANCE(362);
      if (lookahead == 't') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(241);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if (!sym_unquoted_string_character_set_5(lookahead)) ADVANCE(387);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(234);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == '0') ADVANCE(213);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'a') ADVANCE(319);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'a') ADVANCE(323);
      if (lookahead == 's') ADVANCE(429);
      if (lookahead == 'u') ADVANCE(321);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'a') ADVANCE(254);
      if (lookahead == 'b') ADVANCE(309);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'a') ADVANCE(335);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'a') ADVANCE(257);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'a') ADVANCE(261);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'a') ADVANCE(263);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'a') ADVANCE(265);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'a') ADVANCE(268);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'a') ADVANCE(269);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'b') ADVANCE(366);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'b') ADVANCE(367);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'b') ADVANCE(368);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'b') ADVANCE(369);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'b') ADVANCE(370);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'b') ADVANCE(371);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'b') ADVANCE(372);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'b') ADVANCE(373);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'b') ADVANCE(374);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'b') ADVANCE(375);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'b') ADVANCE(376);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'b') ADVANCE(377);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'b') ADVANCE(378);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'b') ADVANCE(379);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'b') ADVANCE(380);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'b') ADVANCE(381);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'b') ADVANCE(310);
      if (lookahead == 'g') ADVANCE(248);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'b') ADVANCE(311);
      if (lookahead == 'l') ADVANCE(333);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'b') ADVANCE(312);
      if (lookahead == 'g') ADVANCE(249);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'b') ADVANCE(313);
      if (lookahead == 't') ADVANCE(250);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'b') ADVANCE(314);
      if (lookahead == 'r') ADVANCE(251);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'b') ADVANCE(315);
      if (lookahead == 't') ADVANCE(359);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'b') ADVANCE(316);
      if (lookahead == 't') ADVANCE(360);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'c') ADVANCE(337);
      if (lookahead == 'l') ADVANCE(320);
      if (lookahead == 'n') ADVANCE(364);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'c') ADVANCE(329);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'c') ADVANCE(330);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'c') ADVANCE(331);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'c') ADVANCE(332);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'd') ADVANCE(460);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'd') ADVANCE(434);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'd') ADVANCE(444);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'd') ADVANCE(454);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'e') ADVANCE(317);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'e') ADVANCE(504);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'e') ADVANCE(226);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'e') ADVANCE(228);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'e') ADVANCE(466);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'e') ADVANCE(540);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'e') ADVANCE(622);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'e') ADVANCE(586);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'e') ADVANCE(522);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'e') ADVANCE(564);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'e') ADVANCE(510);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'e') ADVANCE(574);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'e') ADVANCE(516);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'e') ADVANCE(610);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'e') ADVANCE(534);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'e') ADVANCE(598);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'e') ADVANCE(528);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'e') ADVANCE(644);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'e') ADVANCE(634);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'e') ADVANCE(552);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'e') ADVANCE(546);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'h') ADVANCE(490);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'i') ADVANCE(450);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'i') ADVANCE(255);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'i') ADVANCE(256);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'i') ADVANCE(258);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'i') ADVANCE(260);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'i') ADVANCE(262);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'i') ADVANCE(264);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'i') ADVANCE(266);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'i') ADVANCE(267);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'k') ADVANCE(484);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'l') ADVANCE(230);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'l') ADVANCE(339);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'l') ADVANCE(308);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'l') ADVANCE(318);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'n') ADVANCE(282);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'n') ADVANCE(327);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'n') ADVANCE(283);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'n') ADVANCE(284);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'n') ADVANCE(285);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'o') ADVANCE(430);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'o') ADVANCE(440);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'o') ADVANCE(322);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'o') ADVANCE(324);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'o') ADVANCE(325);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'o') ADVANCE(326);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'o') ADVANCE(259);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'r') ADVANCE(472);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'r') ADVANCE(496);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'r') ADVANCE(363);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'r') ADVANCE(328);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 's') ADVANCE(439);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 's') ADVANCE(289);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 't') ADVANCE(307);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 't') ADVANCE(287);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 't') ADVANCE(290);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 't') ADVANCE(291);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 't') ADVANCE(292);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 't') ADVANCE(293);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 't') ADVANCE(294);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 't') ADVANCE(295);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 't') ADVANCE(296);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 't') ADVANCE(297);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 't') ADVANCE(298);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 't') ADVANCE(299);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 't') ADVANCE(300);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 't') ADVANCE(301);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 't') ADVANCE(302);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 't') ADVANCE(303);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 't') ADVANCE(304);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 't') ADVANCE(305);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 't') ADVANCE(306);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 't') ADVANCE(252);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 't') ADVANCE(253);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'u') ADVANCE(334);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'u') ADVANCE(321);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'u') ADVANCE(288);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'u') ADVANCE(342);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'y') ADVANCE(478);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'y') ADVANCE(343);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'y') ADVANCE(344);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'y') ADVANCE(345);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'y') ADVANCE(346);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'y') ADVANCE(347);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'y') ADVANCE(348);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'y') ADVANCE(349);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'y') ADVANCE(350);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'y') ADVANCE(351);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'y') ADVANCE(352);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'y') ADVANCE(353);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'y') ADVANCE(354);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'y') ADVANCE(355);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'y') ADVANCE(356);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'y') ADVANCE(357);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'y') ADVANCE(358);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(219);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(220);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(222);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(184);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '+') ADVANCE(182);
      if (lookahead == '-') ADVANCE(398);
      if (lookahead == '/') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      if (!aux_sym_unquoted_path_token1_character_set_6(lookahead)) ADVANCE(400);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(234);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(185);
      if (lookahead == 'c') ADVANCE(394);
      if (!aux_sym_unquoted_path_token1_character_set_4(lookahead)) ADVANCE(400);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(185);
      if (lookahead == 'd') ADVANCE(411);
      if (!aux_sym_unquoted_path_token1_character_set_4(lookahead)) ADVANCE(400);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(185);
      if (lookahead == 'e') ADVANCE(420);
      if (!aux_sym_unquoted_path_token1_character_set_4(lookahead)) ADVANCE(400);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(185);
      if (lookahead == 'e') ADVANCE(183);
      if (!aux_sym_unquoted_path_token1_character_set_4(lookahead)) ADVANCE(400);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(185);
      if (lookahead == 'l') ADVANCE(395);
      if (!aux_sym_unquoted_path_token1_character_set_4(lookahead)) ADVANCE(400);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(185);
      if (lookahead == 'u') ADVANCE(391);
      if (!aux_sym_unquoted_path_token1_character_set_4(lookahead)) ADVANCE(400);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(185);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(214);
      if (!aux_sym_unquoted_path_token1_character_set_4(lookahead)) ADVANCE(400);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(215);
      if (!aux_sym_unquoted_path_token1_character_set_4(lookahead)) ADVANCE(400);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      if (!aux_sym_unquoted_path_token1_character_set_5(lookahead)) ADVANCE(400);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(217);
      if (!aux_sym_unquoted_path_token1_character_set_5(lookahead)) ADVANCE(400);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(185);
      if (!aux_sym_unquoted_path_token1_character_set_4(lookahead)) ADVANCE(400);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(412);
      if (lookahead == 'c') ADVANCE(407);
      if (!aux_sym_unquoted_path_token1_character_set_4(lookahead)) ADVANCE(400);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(412);
      if (lookahead == 'c') ADVANCE(408);
      if (!aux_sym_unquoted_path_token1_character_set_4(lookahead)) ADVANCE(400);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(412);
      if (lookahead == 'd') ADVANCE(392);
      if (!aux_sym_unquoted_path_token1_character_set_4(lookahead)) ADVANCE(400);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(412);
      if (lookahead == 'd') ADVANCE(393);
      if (!aux_sym_unquoted_path_token1_character_set_4(lookahead)) ADVANCE(400);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(412);
      if (lookahead == 'l') ADVANCE(390);
      if (lookahead == 'n') ADVANCE(401);
      if (!aux_sym_unquoted_path_token1_character_set_4(lookahead)) ADVANCE(400);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(412);
      if (lookahead == 'l') ADVANCE(390);
      if (lookahead == 'n') ADVANCE(402);
      if (!aux_sym_unquoted_path_token1_character_set_4(lookahead)) ADVANCE(400);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(412);
      if (lookahead == 'l') ADVANCE(409);
      if (!aux_sym_unquoted_path_token1_character_set_4(lookahead)) ADVANCE(400);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(412);
      if (lookahead == 'l') ADVANCE(410);
      if (!aux_sym_unquoted_path_token1_character_set_4(lookahead)) ADVANCE(400);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(412);
      if (lookahead == 'u') ADVANCE(403);
      if (!aux_sym_unquoted_path_token1_character_set_4(lookahead)) ADVANCE(400);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(412);
      if (lookahead == 'u') ADVANCE(404);
      if (!aux_sym_unquoted_path_token1_character_set_4(lookahead)) ADVANCE(400);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(412);
      if (!aux_sym_unquoted_path_token1_character_set_4(lookahead)) ADVANCE(400);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (!aux_sym_unquoted_path_token1_character_set_2(lookahead)) ADVANCE(400);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE_QMARK);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      if (lookahead == '?') ADVANCE(417);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_include);
      if (!aux_sym_unquoted_path_token1_character_set_1(lookahead)) ADVANCE(400);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_required);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_url);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_classpath);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_DOT2);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_ns);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_ns);
      if (lookahead == '/') ADVANCE(184);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_nano);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 's') ADVANCE(432);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_nano);
      if (lookahead == 's') ADVANCE(433);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_nanos);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'e') ADVANCE(279);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_nanos);
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_nanosecond);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 's') ADVANCE(437);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_nanosecond);
      if (lookahead == 's') ADVANCE(436);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_nanoseconds);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_nanoseconds);
      if (lookahead == '/') ADVANCE(184);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_us);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_us);
      if (lookahead == '/') ADVANCE(184);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_micro);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 's') ADVANCE(442);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_micro);
      if (lookahead == 's') ADVANCE(443);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_micros);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'e') ADVANCE(280);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_micros);
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_microsecond);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 's') ADVANCE(447);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_microsecond);
      if (lookahead == 's') ADVANCE(446);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_microseconds);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_microseconds);
      if (lookahead == '/') ADVANCE(184);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_ms);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_ms);
      if (lookahead == '/') ADVANCE(184);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_milli);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 's') ADVANCE(452);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_milli);
      if (lookahead == 's') ADVANCE(453);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_millis);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'e') ADVANCE(281);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_millis);
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_millisecond);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 's') ADVANCE(457);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_millisecond);
      if (lookahead == 's') ADVANCE(456);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_milliseconds);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_milliseconds);
      if (lookahead == '/') ADVANCE(184);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'e') ADVANCE(278);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_second);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 's') ADVANCE(463);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_second);
      if (lookahead == 's') ADVANCE(462);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_seconds);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_seconds);
      if (lookahead == '/') ADVANCE(184);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'e') ADVANCE(272);
      if (lookahead == 'i') ADVANCE(277);
      if (lookahead == 'o') ADVANCE(488);
      if (lookahead == 's') ADVANCE(449);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == 'e') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(51);
      if (lookahead == 'o') ADVANCE(489);
      if (lookahead == 's') ADVANCE(448);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_minute);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 's') ADVANCE(469);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_minute);
      if (lookahead == 's') ADVANCE(468);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_minutes);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_minutes);
      if (lookahead == '/') ADVANCE(184);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_h);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'o') ADVANCE(361);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_h);
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_hour);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 's') ADVANCE(475);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_hour);
      if (lookahead == 's') ADVANCE(474);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_hours);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_hours);
      if (lookahead == '/') ADVANCE(184);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_d);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'a') ADVANCE(365);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_d);
      if (lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_day);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 's') ADVANCE(481);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_day);
      if (lookahead == 's') ADVANCE(480);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_days);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_days);
      if (lookahead == '/') ADVANCE(184);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_w);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'e') ADVANCE(286);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_w);
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_week);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 's') ADVANCE(487);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_week);
      if (lookahead == 's') ADVANCE(486);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_weeks);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_weeks);
      if (lookahead == '/') ADVANCE(184);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_mo);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'n') ADVANCE(340);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_mo);
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_month);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 's') ADVANCE(493);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_month);
      if (lookahead == 's') ADVANCE(492);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_months);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_months);
      if (lookahead == '/') ADVANCE(184);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_y);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'e') ADVANCE(247);
      if (lookahead == 'o') ADVANCE(275);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_y);
      if (lookahead == 'e') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_year);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 's') ADVANCE(499);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_year);
      if (lookahead == 's') ADVANCE(498);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_years);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_years);
      if (lookahead == '/') ADVANCE(184);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_B);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_B);
      if (lookahead == '/') ADVANCE(184);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'y') ADVANCE(341);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == 'y') ADVANCE(136);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_byte);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 's') ADVANCE(507);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_byte);
      if (lookahead == 's') ADVANCE(506);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_bytes);
      if (lookahead == '/') ADVANCE(184);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_kB);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_kB);
      if (lookahead == '/') ADVANCE(184);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_kilobyte);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 's') ADVANCE(513);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_kilobyte);
      if (lookahead == 's') ADVANCE(512);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_kilobytes);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_kilobytes);
      if (lookahead == '/') ADVANCE(184);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_MB);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_MB);
      if (lookahead == '/') ADVANCE(184);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_megabyte);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 's') ADVANCE(519);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_megabyte);
      if (lookahead == 's') ADVANCE(518);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_megabytes);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_megabytes);
      if (lookahead == '/') ADVANCE(184);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_GB);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_GB);
      if (lookahead == '/') ADVANCE(184);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_gigabyte);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 's') ADVANCE(525);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_gigabyte);
      if (lookahead == 's') ADVANCE(524);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_gigabytes);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_gigabytes);
      if (lookahead == '/') ADVANCE(184);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_TB);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_TB);
      if (lookahead == '/') ADVANCE(184);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_terabyte);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 's') ADVANCE(531);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_terabyte);
      if (lookahead == 's') ADVANCE(530);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_terabytes);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_terabytes);
      if (lookahead == '/') ADVANCE(184);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_PB);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_PB);
      if (lookahead == '/') ADVANCE(184);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_petabyte);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 's') ADVANCE(537);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_petabyte);
      if (lookahead == 's') ADVANCE(536);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_petabytes);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_petabytes);
      if (lookahead == '/') ADVANCE(184);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_EB);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_EB);
      if (lookahead == '/') ADVANCE(184);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_exabyte);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 's') ADVANCE(543);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_exabyte);
      if (lookahead == 's') ADVANCE(542);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_exabytes);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_exabytes);
      if (lookahead == '/') ADVANCE(184);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_ZB);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_ZB);
      if (lookahead == '/') ADVANCE(184);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_zettabyte);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 's') ADVANCE(549);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_zettabyte);
      if (lookahead == 's') ADVANCE(548);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_zettabytes);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_zettabytes);
      if (lookahead == '/') ADVANCE(184);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_YB);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_YB);
      if (lookahead == '/') ADVANCE(184);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_yottabyte);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 's') ADVANCE(555);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_yottabyte);
      if (lookahead == 's') ADVANCE(554);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_yottabytes);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_yottabytes);
      if (lookahead == '/') ADVANCE(184);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_K);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'i') ADVANCE(560);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_K);
      if (lookahead == 'i') ADVANCE(561);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_k);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'B') ADVANCE(509);
      if (lookahead == 'i') ADVANCE(271);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_k);
      if (lookahead == 'B') ADVANCE(508);
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_Ki);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'B') ADVANCE(563);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_Ki);
      if (lookahead == 'B') ADVANCE(562);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_KiB);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_KiB);
      if (lookahead == '/') ADVANCE(184);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_kibibyte);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 's') ADVANCE(567);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_kibibyte);
      if (lookahead == 's') ADVANCE(566);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_kibibytes);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_kibibytes);
      if (lookahead == '/') ADVANCE(184);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_M);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'B') ADVANCE(515);
      if (lookahead == 'i') ADVANCE(570);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_M);
      if (lookahead == 'B') ADVANCE(514);
      if (lookahead == 'i') ADVANCE(571);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_Mi);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'B') ADVANCE(573);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_Mi);
      if (lookahead == 'B') ADVANCE(572);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_MiB);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_MiB);
      if (lookahead == '/') ADVANCE(184);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_mebibyte);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 's') ADVANCE(577);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_mebibyte);
      if (lookahead == 's') ADVANCE(576);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_mebibytes);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_mebibytes);
      if (lookahead == '/') ADVANCE(184);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_G);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'B') ADVANCE(521);
      if (lookahead == 'i') ADVANCE(582);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_G);
      if (lookahead == 'B') ADVANCE(520);
      if (lookahead == 'i') ADVANCE(583);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_g);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'i') ADVANCE(270);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_g);
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_Gi);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'B') ADVANCE(585);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_Gi);
      if (lookahead == 'B') ADVANCE(584);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_GiB);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_GiB);
      if (lookahead == '/') ADVANCE(184);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_gibibyte);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 's') ADVANCE(589);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_gibibyte);
      if (lookahead == 's') ADVANCE(588);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_gibibytes);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_gibibytes);
      if (lookahead == '/') ADVANCE(184);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'B') ADVANCE(527);
      if (lookahead == 'i') ADVANCE(594);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'B') ADVANCE(526);
      if (lookahead == 'i') ADVANCE(595);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_t);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'e') ADVANCE(274);
      if (lookahead == 'r') ADVANCE(363);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_t);
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_Ti);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'B') ADVANCE(597);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_Ti);
      if (lookahead == 'B') ADVANCE(596);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_TiB);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_TiB);
      if (lookahead == '/') ADVANCE(184);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_tebibyte);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 's') ADVANCE(601);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_tebibyte);
      if (lookahead == 's') ADVANCE(600);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_tebibytes);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_tebibytes);
      if (lookahead == '/') ADVANCE(184);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_P);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'B') ADVANCE(533);
      if (lookahead == 'i') ADVANCE(606);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_P);
      if (lookahead == 'B') ADVANCE(532);
      if (lookahead == 'i') ADVANCE(607);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'e') ADVANCE(273);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_Pi);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'B') ADVANCE(609);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_Pi);
      if (lookahead == 'B') ADVANCE(608);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_PiB);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_PiB);
      if (lookahead == '/') ADVANCE(184);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_pebibyte);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 's') ADVANCE(613);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_pebibyte);
      if (lookahead == 's') ADVANCE(612);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_pebibytes);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_pebibytes);
      if (lookahead == '/') ADVANCE(184);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_E);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'B') ADVANCE(539);
      if (lookahead == 'i') ADVANCE(618);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_E);
      if (lookahead == 'B') ADVANCE(538);
      if (lookahead == 'i') ADVANCE(619);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'x') ADVANCE(246);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == 'x') ADVANCE(17);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_Ei);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'B') ADVANCE(621);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_Ei);
      if (lookahead == 'B') ADVANCE(620);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_EiB);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_EiB);
      if (lookahead == '/') ADVANCE(184);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_exbibyte);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 's') ADVANCE(625);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_exbibyte);
      if (lookahead == 's') ADVANCE(624);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_exbibytes);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_exbibytes);
      if (lookahead == '/') ADVANCE(184);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_Z);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'B') ADVANCE(545);
      if (lookahead == 'i') ADVANCE(630);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_Z);
      if (lookahead == 'B') ADVANCE(544);
      if (lookahead == 'i') ADVANCE(631);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_z);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'e') ADVANCE(276);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_z);
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_Zi);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'B') ADVANCE(633);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_Zi);
      if (lookahead == 'B') ADVANCE(632);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_ZiB);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_ZiB);
      if (lookahead == '/') ADVANCE(184);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_zebibyte);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 's') ADVANCE(637);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_zebibyte);
      if (lookahead == 's') ADVANCE(636);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_zebibytes);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_zebibytes);
      if (lookahead == '/') ADVANCE(184);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_Y);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'B') ADVANCE(551);
      if (lookahead == 'i') ADVANCE(640);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_Y);
      if (lookahead == 'B') ADVANCE(550);
      if (lookahead == 'i') ADVANCE(641);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_Yi);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 'B') ADVANCE(643);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_Yi);
      if (lookahead == 'B') ADVANCE(642);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_YiB);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_YiB);
      if (lookahead == '/') ADVANCE(184);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_yobibyte);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == 's') ADVANCE(647);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_yobibyte);
      if (lookahead == 's') ADVANCE(646);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_yobibytes);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_yobibytes);
      if (lookahead == '/') ADVANCE(184);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(387);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 190},
  [2] = {.lex_state = 186},
  [3] = {.lex_state = 188},
  [4] = {.lex_state = 188},
  [5] = {.lex_state = 188},
  [6] = {.lex_state = 188},
  [7] = {.lex_state = 188},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 188},
  [17] = {.lex_state = 188},
  [18] = {.lex_state = 188},
  [19] = {.lex_state = 188},
  [20] = {.lex_state = 188},
  [21] = {.lex_state = 188},
  [22] = {.lex_state = 188},
  [23] = {.lex_state = 188},
  [24] = {.lex_state = 188},
  [25] = {.lex_state = 188},
  [26] = {.lex_state = 188},
  [27] = {.lex_state = 188},
  [28] = {.lex_state = 188},
  [29] = {.lex_state = 188},
  [30] = {.lex_state = 190},
  [31] = {.lex_state = 190},
  [32] = {.lex_state = 190},
  [33] = {.lex_state = 190},
  [34] = {.lex_state = 190},
  [35] = {.lex_state = 190},
  [36] = {.lex_state = 190},
  [37] = {.lex_state = 190},
  [38] = {.lex_state = 190},
  [39] = {.lex_state = 190},
  [40] = {.lex_state = 190},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 190},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 190},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 187},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 187},
  [59] = {.lex_state = 187},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 187},
  [62] = {.lex_state = 187},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 187},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 187},
  [67] = {.lex_state = 187},
  [68] = {.lex_state = 187},
  [69] = {.lex_state = 187},
  [70] = {.lex_state = 187},
  [71] = {.lex_state = 187},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 187},
  [74] = {.lex_state = 187},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 187},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 187},
  [79] = {.lex_state = 187},
  [80] = {.lex_state = 187},
  [81] = {.lex_state = 187},
  [82] = {.lex_state = 187},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 187},
  [85] = {.lex_state = 187},
  [86] = {.lex_state = 187},
  [87] = {.lex_state = 187},
  [88] = {.lex_state = 190},
  [89] = {.lex_state = 190},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 8},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
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
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
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
    [anon_sym_DOT2] = ACTIONS(1),
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
    [sym_document] = STATE(107),
    [sym_object] = STATE(105),
    [sym_pair] = STATE(66),
    [sym_array] = STATE(105),
    [sym_string] = STATE(42),
    [sym_path] = STATE(52),
    [sym_unquoted_path] = STATE(42),
    [sym_include] = STATE(66),
    [aux_sym_path_repeat1] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_number] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [aux_sym_unquoted_path_token1] = ACTIONS(15),
    [anon_sym_include] = ACTIONS(17),
  },
  [2] = {
    [sym_unit] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_COMMA] = ACTIONS(21),
    [anon_sym_LF] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(21),
    [sym_true] = ACTIONS(21),
    [sym_false] = ACTIONS(21),
    [sym_null] = ACTIONS(21),
    [sym_comment] = ACTIONS(23),
    [sym_unquoted_string] = ACTIONS(21),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(21),
    [anon_sym_DOLLAR_LBRACE_QMARK] = ACTIONS(21),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(21),
    [anon_sym_ns] = ACTIONS(25),
    [anon_sym_nano] = ACTIONS(25),
    [anon_sym_nanos] = ACTIONS(25),
    [anon_sym_nanosecond] = ACTIONS(25),
    [anon_sym_nanoseconds] = ACTIONS(25),
    [anon_sym_us] = ACTIONS(25),
    [anon_sym_micro] = ACTIONS(25),
    [anon_sym_micros] = ACTIONS(25),
    [anon_sym_microsecond] = ACTIONS(25),
    [anon_sym_microseconds] = ACTIONS(25),
    [anon_sym_ms] = ACTIONS(25),
    [anon_sym_milli] = ACTIONS(25),
    [anon_sym_millis] = ACTIONS(25),
    [anon_sym_millisecond] = ACTIONS(25),
    [anon_sym_milliseconds] = ACTIONS(25),
    [anon_sym_s] = ACTIONS(25),
    [anon_sym_second] = ACTIONS(25),
    [anon_sym_seconds] = ACTIONS(25),
    [anon_sym_m] = ACTIONS(25),
    [anon_sym_minute] = ACTIONS(25),
    [anon_sym_minutes] = ACTIONS(25),
    [anon_sym_h] = ACTIONS(25),
    [anon_sym_hour] = ACTIONS(25),
    [anon_sym_hours] = ACTIONS(25),
    [anon_sym_d] = ACTIONS(25),
    [anon_sym_day] = ACTIONS(25),
    [anon_sym_days] = ACTIONS(25),
    [anon_sym_w] = ACTIONS(25),
    [anon_sym_week] = ACTIONS(25),
    [anon_sym_weeks] = ACTIONS(25),
    [anon_sym_mo] = ACTIONS(25),
    [anon_sym_month] = ACTIONS(25),
    [anon_sym_months] = ACTIONS(25),
    [anon_sym_y] = ACTIONS(25),
    [anon_sym_year] = ACTIONS(25),
    [anon_sym_years] = ACTIONS(25),
    [anon_sym_B] = ACTIONS(25),
    [anon_sym_b] = ACTIONS(25),
    [anon_sym_byte] = ACTIONS(25),
    [anon_sym_bytes] = ACTIONS(25),
    [anon_sym_kB] = ACTIONS(25),
    [anon_sym_kilobyte] = ACTIONS(25),
    [anon_sym_kilobytes] = ACTIONS(25),
    [anon_sym_MB] = ACTIONS(25),
    [anon_sym_megabyte] = ACTIONS(25),
    [anon_sym_megabytes] = ACTIONS(25),
    [anon_sym_GB] = ACTIONS(25),
    [anon_sym_gigabyte] = ACTIONS(25),
    [anon_sym_gigabytes] = ACTIONS(25),
    [anon_sym_TB] = ACTIONS(25),
    [anon_sym_terabyte] = ACTIONS(25),
    [anon_sym_terabytes] = ACTIONS(25),
    [anon_sym_PB] = ACTIONS(25),
    [anon_sym_petabyte] = ACTIONS(25),
    [anon_sym_petabytes] = ACTIONS(25),
    [anon_sym_EB] = ACTIONS(25),
    [anon_sym_exabyte] = ACTIONS(25),
    [anon_sym_exabytes] = ACTIONS(25),
    [anon_sym_ZB] = ACTIONS(25),
    [anon_sym_zettabyte] = ACTIONS(25),
    [anon_sym_zettabytes] = ACTIONS(25),
    [anon_sym_YB] = ACTIONS(25),
    [anon_sym_yottabyte] = ACTIONS(25),
    [anon_sym_yottabytes] = ACTIONS(25),
    [anon_sym_K] = ACTIONS(25),
    [anon_sym_k] = ACTIONS(25),
    [anon_sym_Ki] = ACTIONS(25),
    [anon_sym_KiB] = ACTIONS(25),
    [anon_sym_kibibyte] = ACTIONS(25),
    [anon_sym_kibibytes] = ACTIONS(25),
    [anon_sym_M] = ACTIONS(25),
    [anon_sym_Mi] = ACTIONS(25),
    [anon_sym_MiB] = ACTIONS(25),
    [anon_sym_mebibyte] = ACTIONS(25),
    [anon_sym_mebibytes] = ACTIONS(25),
    [anon_sym_G] = ACTIONS(25),
    [anon_sym_g] = ACTIONS(25),
    [anon_sym_Gi] = ACTIONS(25),
    [anon_sym_GiB] = ACTIONS(25),
    [anon_sym_gibibyte] = ACTIONS(25),
    [anon_sym_gibibytes] = ACTIONS(25),
    [anon_sym_T] = ACTIONS(25),
    [anon_sym_t] = ACTIONS(25),
    [anon_sym_Ti] = ACTIONS(25),
    [anon_sym_TiB] = ACTIONS(25),
    [anon_sym_tebibyte] = ACTIONS(25),
    [anon_sym_tebibytes] = ACTIONS(25),
    [anon_sym_P] = ACTIONS(25),
    [anon_sym_p] = ACTIONS(25),
    [anon_sym_Pi] = ACTIONS(25),
    [anon_sym_PiB] = ACTIONS(25),
    [anon_sym_pebibyte] = ACTIONS(25),
    [anon_sym_pebibytes] = ACTIONS(25),
    [anon_sym_E] = ACTIONS(25),
    [anon_sym_e] = ACTIONS(25),
    [anon_sym_Ei] = ACTIONS(25),
    [anon_sym_EiB] = ACTIONS(25),
    [anon_sym_exbibyte] = ACTIONS(25),
    [anon_sym_exbibytes] = ACTIONS(25),
    [anon_sym_Z] = ACTIONS(25),
    [anon_sym_z] = ACTIONS(25),
    [anon_sym_Zi] = ACTIONS(25),
    [anon_sym_ZiB] = ACTIONS(25),
    [anon_sym_zebibyte] = ACTIONS(25),
    [anon_sym_zebibytes] = ACTIONS(25),
    [anon_sym_Y] = ACTIONS(25),
    [anon_sym_Yi] = ACTIONS(25),
    [anon_sym_YiB] = ACTIONS(25),
    [anon_sym_yobibyte] = ACTIONS(25),
    [anon_sym_yobibytes] = ACTIONS(25),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(34), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(40), 1,
      sym_number,
    ACTIONS(46), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 2,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(29), 4,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
    ACTIONS(43), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
    STATE(3), 6,
      aux_sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_multiline_string,
      sym_substitution,
  [46] = 11,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 1,
      anon_sym_LBRACE,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    ACTIONS(60), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      sym_number,
    ACTIONS(66), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(68), 2,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(54), 3,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_RBRACE,
    ACTIONS(64), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
    STATE(3), 6,
      aux_sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_multiline_string,
      sym_substitution,
  [91] = 12,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_LBRACE,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    ACTIONS(60), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      sym_number,
    ACTIONS(66), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(72), 1,
      anon_sym_RBRACK,
    STATE(71), 1,
      aux_sym_array_repeat1,
    ACTIONS(68), 2,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(70), 2,
      anon_sym_COMMA,
      anon_sym_LF,
    ACTIONS(64), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
    STATE(3), 6,
      aux_sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_multiline_string,
      sym_substitution,
  [138] = 12,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_LBRACE,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    ACTIONS(60), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      sym_number,
    ACTIONS(66), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(76), 1,
      anon_sym_RBRACK,
    STATE(73), 1,
      aux_sym_array_repeat1,
    ACTIONS(68), 2,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(74), 2,
      anon_sym_COMMA,
      anon_sym_LF,
    ACTIONS(64), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
    STATE(3), 6,
      aux_sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_multiline_string,
      sym_substitution,
  [185] = 10,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_LBRACE,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    ACTIONS(60), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      sym_number,
    ACTIONS(66), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(68), 2,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(78), 3,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_RBRACK,
    ACTIONS(64), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
    STATE(3), 6,
      aux_sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_multiline_string,
      sym_substitution,
  [227] = 10,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_LBRACE,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    ACTIONS(60), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      sym_number,
    ACTIONS(66), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(80), 1,
      anon_sym_RBRACK,
    ACTIONS(68), 2,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
    STATE(7), 6,
      aux_sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_multiline_string,
      sym_substitution,
  [267] = 10,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_LBRACE,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    ACTIONS(60), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      sym_number,
    ACTIONS(66), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(84), 1,
      anon_sym_RBRACK,
    ACTIONS(68), 2,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(86), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
    STATE(6), 6,
      aux_sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_multiline_string,
      sym_substitution,
  [307] = 10,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_LBRACE,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    ACTIONS(60), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      sym_number,
    ACTIONS(66), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(88), 1,
      anon_sym_RBRACK,
    ACTIONS(68), 2,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
    STATE(7), 6,
      aux_sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_multiline_string,
      sym_substitution,
  [347] = 10,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_LBRACE,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    ACTIONS(60), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      sym_number,
    ACTIONS(66), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(90), 1,
      anon_sym_RBRACK,
    ACTIONS(68), 2,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
    STATE(7), 6,
      aux_sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_multiline_string,
      sym_substitution,
  [387] = 10,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_LBRACE,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    ACTIONS(60), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      sym_number,
    ACTIONS(66), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(92), 1,
      anon_sym_RBRACK,
    ACTIONS(68), 2,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(94), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
    STATE(5), 6,
      aux_sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_multiline_string,
      sym_substitution,
  [427] = 10,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_LBRACE,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    ACTIONS(60), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      sym_number,
    ACTIONS(66), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(96), 1,
      anon_sym_RBRACK,
    ACTIONS(68), 2,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
    STATE(7), 6,
      aux_sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_multiline_string,
      sym_substitution,
  [467] = 9,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_LBRACE,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    ACTIONS(60), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      sym_number,
    ACTIONS(66), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(68), 2,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
    STATE(7), 6,
      aux_sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_multiline_string,
      sym_substitution,
  [504] = 9,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_LBRACE,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    ACTIONS(60), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      sym_number,
    ACTIONS(66), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(68), 2,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(98), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
    STATE(4), 6,
      aux_sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_multiline_string,
      sym_substitution,
  [541] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
    ACTIONS(102), 15,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
  [565] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
    ACTIONS(106), 15,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
  [589] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
    ACTIONS(110), 15,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
  [613] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
    ACTIONS(114), 15,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
  [637] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    ACTIONS(118), 15,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
  [661] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
    ACTIONS(122), 15,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
  [685] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
    ACTIONS(126), 15,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
  [709] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
    ACTIONS(130), 15,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
  [733] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
    ACTIONS(134), 15,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
  [757] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 15,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
  [781] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(136), 1,
      ts_builtin_sym_end,
    ACTIONS(138), 15,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
  [805] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
    ACTIONS(142), 15,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
  [829] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
    ACTIONS(146), 15,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
  [853] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
    ACTIONS(150), 15,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
  [877] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(15), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(17), 1,
      anon_sym_include,
    ACTIONS(152), 1,
      ts_builtin_sym_end,
    STATE(52), 1,
      sym_path,
    STATE(68), 2,
      sym_pair,
      sym_include,
    STATE(42), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
  [908] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(15), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(17), 1,
      anon_sym_include,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
    STATE(52), 1,
      sym_path,
    STATE(68), 2,
      sym_pair,
      sym_include,
    STATE(42), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
  [939] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(15), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(17), 1,
      anon_sym_include,
    ACTIONS(156), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      sym_path,
    STATE(81), 2,
      sym_pair,
      sym_include,
    STATE(42), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
  [970] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(15), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(17), 1,
      anon_sym_include,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      sym_path,
    STATE(68), 2,
      sym_pair,
      sym_include,
    STATE(42), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
  [1001] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(15), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(17), 1,
      anon_sym_include,
    ACTIONS(160), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      sym_path,
    STATE(67), 2,
      sym_pair,
      sym_include,
    STATE(42), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
  [1032] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(15), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(17), 1,
      anon_sym_include,
    ACTIONS(162), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      sym_path,
    STATE(68), 2,
      sym_pair,
      sym_include,
    STATE(42), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
  [1063] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(15), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(17), 1,
      anon_sym_include,
    ACTIONS(164), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      sym_path,
    STATE(64), 2,
      sym_pair,
      sym_include,
    STATE(42), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
  [1094] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(15), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(17), 1,
      anon_sym_include,
    ACTIONS(166), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      sym_path,
    STATE(68), 2,
      sym_pair,
      sym_include,
    STATE(42), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
  [1125] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(15), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(17), 1,
      anon_sym_include,
    ACTIONS(168), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      sym_path,
    STATE(68), 2,
      sym_pair,
      sym_include,
    STATE(42), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
  [1156] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(15), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(17), 1,
      anon_sym_include,
    ACTIONS(170), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      sym_path,
    STATE(68), 2,
      sym_pair,
      sym_include,
    STATE(42), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
  [1187] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(15), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(17), 1,
      anon_sym_include,
    ACTIONS(172), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      sym_path,
    STATE(68), 2,
      sym_pair,
      sym_include,
    STATE(42), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
  [1218] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_DQUOTE,
    ACTIONS(179), 1,
      aux_sym_unquoted_path_token1,
    STATE(41), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
    ACTIONS(174), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
  [1240] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym_unquoted_path_token1,
    STATE(41), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
    ACTIONS(182), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
  [1262] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(15), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(17), 1,
      anon_sym_include,
    STATE(52), 1,
      sym_path,
    STATE(68), 2,
      sym_pair,
      sym_include,
    STATE(42), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
  [1290] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(188), 1,
      anon_sym_DOT,
    STATE(45), 1,
      aux_sym_unquoted_path_repeat1,
    ACTIONS(184), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
  [1311] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(194), 1,
      anon_sym_DOT,
    STATE(45), 1,
      aux_sym_unquoted_path_repeat1,
    ACTIONS(190), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
  [1332] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(201), 1,
      anon_sym_DOT,
    STATE(44), 1,
      aux_sym_unquoted_path_repeat1,
    ACTIONS(197), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
  [1353] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(100), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_RPAREN,
  [1369] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(140), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_RPAREN,
  [1385] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(190), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DOT,
  [1401] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(15), 1,
      aux_sym_unquoted_path_token1,
    STATE(94), 1,
      sym_path,
    STATE(42), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
  [1422] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(203), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
  [1437] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      sym__pair_separator,
    STATE(78), 1,
      sym_value,
    STATE(79), 1,
      sym_object,
    ACTIONS(209), 3,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
  [1458] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(184), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
  [1473] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_DQUOTE,
    ACTIONS(213), 1,
      anon_sym_required,
    STATE(58), 2,
      sym_string,
      sym__resource_name,
    ACTIONS(215), 3,
      anon_sym_url,
      anon_sym_file,
      anon_sym_classpath,
  [1492] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    STATE(104), 2,
      sym_string,
      sym__resource_name,
    ACTIONS(217), 3,
      anon_sym_url,
      anon_sym_file,
      anon_sym_classpath,
  [1508] = 6,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
    ACTIONS(221), 1,
      anon_sym_COMMA,
    ACTIONS(224), 1,
      anon_sym_LF,
    ACTIONS(227), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      aux_sym_document_repeat1,
  [1527] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
  [1538] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(229), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(231), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1550] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(100), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(102), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1562] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_DQUOTE,
    ACTIONS(235), 1,
      aux_sym_string_content_token1,
    ACTIONS(237), 1,
      sym_escape_sequence,
    STATE(77), 1,
      aux_sym__string_content,
  [1578] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_RBRACK,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(242), 1,
      anon_sym_LF,
    STATE(61), 1,
      aux_sym_array_repeat1,
  [1594] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(247), 1,
      anon_sym_LF,
    ACTIONS(249), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      aux_sym_document_repeat1,
  [1610] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      aux_sym_string_content_token1,
    ACTIONS(255), 1,
      sym_escape_sequence,
    STATE(72), 1,
      aux_sym__string_content,
  [1626] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_COMMA,
    ACTIONS(259), 1,
      anon_sym_LF,
    ACTIONS(261), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      aux_sym_document_repeat1,
  [1642] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      aux_sym_string_content_token1,
    ACTIONS(267), 1,
      sym_escape_sequence,
    STATE(63), 1,
      aux_sym__string_content,
  [1658] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(269), 1,
      ts_builtin_sym_end,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    ACTIONS(273), 1,
      anon_sym_LF,
    STATE(80), 1,
      aux_sym_document_repeat1,
  [1674] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_COMMA,
    ACTIONS(277), 1,
      anon_sym_LF,
    ACTIONS(279), 1,
      anon_sym_RBRACE,
    STATE(76), 1,
      aux_sym_document_repeat1,
  [1690] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(219), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(227), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1702] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(281), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(283), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1714] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(285), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(287), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1726] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_RBRACK,
    ACTIONS(289), 1,
      anon_sym_COMMA,
    ACTIONS(291), 1,
      anon_sym_LF,
    STATE(61), 1,
      aux_sym_array_repeat1,
  [1742] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_DQUOTE,
    ACTIONS(295), 1,
      aux_sym_string_content_token1,
    ACTIONS(298), 1,
      sym_escape_sequence,
    STATE(72), 1,
      aux_sym__string_content,
  [1758] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_RBRACK,
    ACTIONS(301), 1,
      anon_sym_COMMA,
    ACTIONS(303), 1,
      anon_sym_LF,
    STATE(61), 1,
      aux_sym_array_repeat1,
  [1774] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    ACTIONS(307), 1,
      anon_sym_LF,
    ACTIONS(309), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      aux_sym_document_repeat1,
  [1790] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(253), 1,
      aux_sym_string_content_token1,
    ACTIONS(255), 1,
      sym_escape_sequence,
    ACTIONS(311), 1,
      anon_sym_DQUOTE,
    STATE(72), 1,
      aux_sym__string_content,
  [1806] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_COMMA,
    ACTIONS(315), 1,
      anon_sym_LF,
    ACTIONS(317), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      aux_sym_document_repeat1,
  [1822] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(253), 1,
      aux_sym_string_content_token1,
    ACTIONS(255), 1,
      sym_escape_sequence,
    ACTIONS(319), 1,
      anon_sym_DQUOTE,
    STATE(72), 1,
      aux_sym__string_content,
  [1838] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(321), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(323), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1850] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(325), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(327), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1862] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(152), 1,
      ts_builtin_sym_end,
    ACTIONS(329), 1,
      anon_sym_COMMA,
    ACTIONS(331), 1,
      anon_sym_LF,
    STATE(56), 1,
      aux_sym_document_repeat1,
  [1878] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_COMMA,
    ACTIONS(335), 1,
      anon_sym_LF,
    ACTIONS(337), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_document_repeat1,
  [1894] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(112), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(114), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1906] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      aux_sym_string_content_token1,
    ACTIONS(343), 1,
      sym_escape_sequence,
    STATE(75), 1,
      aux_sym__string_content,
  [1922] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(120), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(122), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1934] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(140), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(142), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1946] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(104), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(106), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1958] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(144), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(146), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1970] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    STATE(103), 1,
      sym_string,
  [1980] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    STATE(100), 1,
      sym_string,
  [1990] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      ts_builtin_sym_end,
  [1997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
  [2004] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
  [2011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
  [2018] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_RBRACE,
  [2025] = 2,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(347), 1,
      aux_sym_multiline_string_token1,
  [2032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
  [2039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
  [2046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_LPAREN,
  [2053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
  [2060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_RPAREN,
  [2067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
  [2074] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
  [2081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_RPAREN,
  [2088] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_RPAREN,
  [2095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      ts_builtin_sym_end,
  [2102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      aux_sym_unquoted_path_token1,
  [2109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      ts_builtin_sym_end,
  [2116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_LPAREN,
  [2123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 46,
  [SMALL_STATE(5)] = 91,
  [SMALL_STATE(6)] = 138,
  [SMALL_STATE(7)] = 185,
  [SMALL_STATE(8)] = 227,
  [SMALL_STATE(9)] = 267,
  [SMALL_STATE(10)] = 307,
  [SMALL_STATE(11)] = 347,
  [SMALL_STATE(12)] = 387,
  [SMALL_STATE(13)] = 427,
  [SMALL_STATE(14)] = 467,
  [SMALL_STATE(15)] = 504,
  [SMALL_STATE(16)] = 541,
  [SMALL_STATE(17)] = 565,
  [SMALL_STATE(18)] = 589,
  [SMALL_STATE(19)] = 613,
  [SMALL_STATE(20)] = 637,
  [SMALL_STATE(21)] = 661,
  [SMALL_STATE(22)] = 685,
  [SMALL_STATE(23)] = 709,
  [SMALL_STATE(24)] = 733,
  [SMALL_STATE(25)] = 757,
  [SMALL_STATE(26)] = 781,
  [SMALL_STATE(27)] = 805,
  [SMALL_STATE(28)] = 829,
  [SMALL_STATE(29)] = 853,
  [SMALL_STATE(30)] = 877,
  [SMALL_STATE(31)] = 908,
  [SMALL_STATE(32)] = 939,
  [SMALL_STATE(33)] = 970,
  [SMALL_STATE(34)] = 1001,
  [SMALL_STATE(35)] = 1032,
  [SMALL_STATE(36)] = 1063,
  [SMALL_STATE(37)] = 1094,
  [SMALL_STATE(38)] = 1125,
  [SMALL_STATE(39)] = 1156,
  [SMALL_STATE(40)] = 1187,
  [SMALL_STATE(41)] = 1218,
  [SMALL_STATE(42)] = 1240,
  [SMALL_STATE(43)] = 1262,
  [SMALL_STATE(44)] = 1290,
  [SMALL_STATE(45)] = 1311,
  [SMALL_STATE(46)] = 1332,
  [SMALL_STATE(47)] = 1353,
  [SMALL_STATE(48)] = 1369,
  [SMALL_STATE(49)] = 1385,
  [SMALL_STATE(50)] = 1401,
  [SMALL_STATE(51)] = 1422,
  [SMALL_STATE(52)] = 1437,
  [SMALL_STATE(53)] = 1458,
  [SMALL_STATE(54)] = 1473,
  [SMALL_STATE(55)] = 1492,
  [SMALL_STATE(56)] = 1508,
  [SMALL_STATE(57)] = 1527,
  [SMALL_STATE(58)] = 1538,
  [SMALL_STATE(59)] = 1550,
  [SMALL_STATE(60)] = 1562,
  [SMALL_STATE(61)] = 1578,
  [SMALL_STATE(62)] = 1594,
  [SMALL_STATE(63)] = 1610,
  [SMALL_STATE(64)] = 1626,
  [SMALL_STATE(65)] = 1642,
  [SMALL_STATE(66)] = 1658,
  [SMALL_STATE(67)] = 1674,
  [SMALL_STATE(68)] = 1690,
  [SMALL_STATE(69)] = 1702,
  [SMALL_STATE(70)] = 1714,
  [SMALL_STATE(71)] = 1726,
  [SMALL_STATE(72)] = 1742,
  [SMALL_STATE(73)] = 1758,
  [SMALL_STATE(74)] = 1774,
  [SMALL_STATE(75)] = 1790,
  [SMALL_STATE(76)] = 1806,
  [SMALL_STATE(77)] = 1822,
  [SMALL_STATE(78)] = 1838,
  [SMALL_STATE(79)] = 1850,
  [SMALL_STATE(80)] = 1862,
  [SMALL_STATE(81)] = 1878,
  [SMALL_STATE(82)] = 1894,
  [SMALL_STATE(83)] = 1906,
  [SMALL_STATE(84)] = 1922,
  [SMALL_STATE(85)] = 1934,
  [SMALL_STATE(86)] = 1946,
  [SMALL_STATE(87)] = 1958,
  [SMALL_STATE(88)] = 1970,
  [SMALL_STATE(89)] = 1980,
  [SMALL_STATE(90)] = 1990,
  [SMALL_STATE(91)] = 1997,
  [SMALL_STATE(92)] = 2004,
  [SMALL_STATE(93)] = 2011,
  [SMALL_STATE(94)] = 2018,
  [SMALL_STATE(95)] = 2025,
  [SMALL_STATE(96)] = 2032,
  [SMALL_STATE(97)] = 2039,
  [SMALL_STATE(98)] = 2046,
  [SMALL_STATE(99)] = 2053,
  [SMALL_STATE(100)] = 2060,
  [SMALL_STATE(101)] = 2067,
  [SMALL_STATE(102)] = 2074,
  [SMALL_STATE(103)] = 2081,
  [SMALL_STATE(104)] = 2088,
  [SMALL_STATE(105)] = 2095,
  [SMALL_STATE(106)] = 2102,
  [SMALL_STATE(107)] = 2109,
  [SMALL_STATE(108)] = 2116,
  [SMALL_STATE(109)] = 2123,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__value, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__value, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__value, 2),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__value, 2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2), SHIFT_REPEAT(32),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2), SHIFT_REPEAT(12),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2), SHIFT_REPEAT(83),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2), SHIFT_REPEAT(2),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2), SHIFT_REPEAT(3),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2), SHIFT_REPEAT(95),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2), SHIFT_REPEAT(50),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 2),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 4),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitution, 3),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substitution, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 2),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 2),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 5),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 5),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 5),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 5),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(60),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(46),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_path, 2),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_path, 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_path_repeat1, 2),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_path_repeat1, 2),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_path_repeat1, 2), SHIFT_REPEAT(106),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_path, 1),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_path, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_path, 3),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(43),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(43),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 2),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(14),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(14),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 5),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 5),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__resource_name, 4),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__resource_name, 4),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_content, 2),
  [295] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_content, 2), SHIFT_REPEAT(72),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_content, 2), SHIFT_REPEAT(72),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 2),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pair, 2),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [357] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
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
