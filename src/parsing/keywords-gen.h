// Copyright 2018 the V8 project authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is automatically generated by gen-keywords-gen-h.py and should not
// be modified manually.

#ifndef V8_PARSING_KEYWORDS_GEN_H_
#define V8_PARSING_KEYWORDS_GEN_H_

#include "src/parsing/token.h"

namespace v8 {
namespace internal {

/* C++ code produced by gperf version 3.1 */
/* Command-line: gperf -m100 src/parsing/keywords.txt  */
/* Computed positions: -k'1-2' */

#if !(                                                                         \
    (' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) && ('%' == 37) && \
    ('&' == 38) && ('\'' == 39) && ('(' == 40) && (')' == 41) &&               \
    ('*' == 42) && ('+' == 43) && (',' == 44) && ('-' == 45) && ('.' == 46) && \
    ('/' == 47) && ('0' == 48) && ('1' == 49) && ('2' == 50) && ('3' == 51) && \
    ('4' == 52) && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) && \
    ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) && ('=' == 61) && \
    ('>' == 62) && ('?' == 63) && ('A' == 65) && ('B' == 66) && ('C' == 67) && \
    ('D' == 68) && ('E' == 69) && ('F' == 70) && ('G' == 71) && ('H' == 72) && \
    ('I' == 73) && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) && \
    ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) && ('R' == 82) && \
    ('S' == 83) && ('T' == 84) && ('U' == 85) && ('V' == 86) && ('W' == 87) && \
    ('X' == 88) && ('Y' == 89) && ('Z' == 90) && ('[' == 91) &&                \
    ('\\' == 92) && (']' == 93) && ('^' == 94) && ('_' == 95) &&               \
    ('a' == 97) && ('b' == 98) && ('c' == 99) && ('d' == 100) &&               \
    ('e' == 101) && ('f' == 102) && ('g' == 103) && ('h' == 104) &&            \
    ('i' == 105) && ('j' == 106) && ('k' == 107) && ('l' == 108) &&            \
    ('m' == 109) && ('n' == 110) && ('o' == 111) && ('p' == 112) &&            \
    ('q' == 113) && ('r' == 114) && ('s' == 115) && ('t' == 116) &&            \
    ('u' == 117) && ('v' == 118) && ('w' == 119) && ('x' == 120) &&            \
    ('y' == 121) && ('z' == 122) && ('{' == 123) && ('|' == 124) &&            \
    ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set."
// If you see this error, please report a bug to <bug-gperf@gnu.org>.
#endif

#line 16 "src/parsing/keywords.txt"
struct PerfectKeywordHashTableEntry {
  const char* name;
  Token::Value value;
};
enum {
  TOTAL_KEYWORDS = 47,
  MIN_WORD_LENGTH = 2,
  MAX_WORD_LENGTH = 10,
  MIN_HASH_VALUE = 2,
  MAX_HASH_VALUE = 51
};

/* maximum key range = 50, duplicates = 0 */

class PerfectKeywordHash {
 private:
  static inline unsigned int Hash(const char* str, int len);

 public:
  static inline Token::Value GetToken(const char* str, int len);
};

inline unsigned int PerfectKeywordHash::Hash(const char* str, int len) {
  static const unsigned char asso_values[] = {
      52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52,
      52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52,
      52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52,
      52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52,
      52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52,
      52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52,
      52, 8,  2,  6,  0,  0,  9,  52, 21, 0,  52, 52, 36, 40, 0,  3,
      6,  52, 17, 13, 16, 16, 38, 25, 6,  26, 52, 52, 52, 52, 52, 52};
  return len + asso_values[static_cast<unsigned char>(str[1])] +
         asso_values[static_cast<unsigned char>(str[0])];
}

static const unsigned char kPerfectKeywordLengthTable[64] = {
    0, 0, 2, 3, 4, 2, 6,  7, 8, 9, 10, 2, 6, 7, 5, 3, 7, 8, 4, 5, 4, 7,
    5, 6, 5, 0, 5, 0, 6,  4, 7, 5, 9,  8, 5, 6, 3, 4, 5, 3, 4, 4, 5, 0,
    6, 4, 6, 5, 6, 3, 10, 5, 0, 0, 0,  0, 0, 0, 0, 0, 0, 0, 0, 0};

static const struct PerfectKeywordHashTableEntry kPerfectKeywordHashTable[64] =
    {{"", Token::IDENTIFIER},
     {"", Token::IDENTIFIER},
#line 41 "src/parsing/keywords.txt"
     {"in", Token::IN},
#line 45 "src/parsing/keywords.txt"
     {"new", Token::NEW},
#line 31 "src/parsing/keywords.txt"
     {"enum", Token::ENUM},
#line 29 "src/parsing/keywords.txt"
     {"do", Token::DO},
#line 28 "src/parsing/keywords.txt"
     {"delete", Token::DELETE},
#line 27 "src/parsing/keywords.txt"
     {"default", Token::DEFAULT},
#line 26 "src/parsing/keywords.txt"
     {"debugger", Token::DEBUGGER},
#line 43 "src/parsing/keywords.txt"
     {"interface", Token::FUTURE_STRICT_RESERVED_WORD},
#line 42 "src/parsing/keywords.txt"
     {"instanceof", Token::INSTANCEOF},
#line 38 "src/parsing/keywords.txt"
     {"if", Token::IF},
#line 32 "src/parsing/keywords.txt"
     {"export", Token::EXPORT},
#line 33 "src/parsing/keywords.txt"
     {"extends", Token::EXTENDS},
#line 24 "src/parsing/keywords.txt"
     {"const", Token::CONST},
#line 36 "src/parsing/keywords.txt"
     {"for", Token::FOR},
#line 35 "src/parsing/keywords.txt"
     {"finally", Token::FINALLY},
#line 25 "src/parsing/keywords.txt"
     {"continue", Token::CONTINUE},
#line 21 "src/parsing/keywords.txt"
     {"case", Token::CASE},
#line 22 "src/parsing/keywords.txt"
     {"catch", Token::CATCH},
#line 46 "src/parsing/keywords.txt"
     {"null", Token::NULL_LITERAL},
#line 47 "src/parsing/keywords.txt"
     {"package", Token::FUTURE_STRICT_RESERVED_WORD},
#line 34 "src/parsing/keywords.txt"
     {"false", Token::FALSE_LITERAL},
#line 51 "src/parsing/keywords.txt"
     {"return", Token::RETURN},
#line 20 "src/parsing/keywords.txt"
     {"break", Token::BREAK},
     {"", Token::IDENTIFIER},
#line 18 "src/parsing/keywords.txt"
     {"async", Token::ASYNC},
     {"", Token::IDENTIFIER},
#line 50 "src/parsing/keywords.txt"
     {"public", Token::FUTURE_STRICT_RESERVED_WORD},
#line 63 "src/parsing/keywords.txt"
     {"with", Token::WITH},
#line 48 "src/parsing/keywords.txt"
     {"private", Token::FUTURE_STRICT_RESERVED_WORD},
#line 64 "src/parsing/keywords.txt"
     {"yield", Token::YIELD},
#line 49 "src/parsing/keywords.txt"
     {"protected", Token::FUTURE_STRICT_RESERVED_WORD},
#line 37 "src/parsing/keywords.txt"
     {"function", Token::FUNCTION},
#line 53 "src/parsing/keywords.txt"
     {"super", Token::SUPER},
#line 52 "src/parsing/keywords.txt"
     {"static", Token::STATIC},
#line 58 "src/parsing/keywords.txt"
     {"try", Token::TRY},
#line 57 "src/parsing/keywords.txt"
     {"true", Token::TRUE_LITERAL},
#line 19 "src/parsing/keywords.txt"
     {"await", Token::AWAIT},
#line 44 "src/parsing/keywords.txt"
     {"let", Token::LET},
#line 30 "src/parsing/keywords.txt"
     {"else", Token::ELSE},
#line 55 "src/parsing/keywords.txt"
     {"this", Token::THIS},
#line 56 "src/parsing/keywords.txt"
     {"throw", Token::THROW},
     {"", Token::IDENTIFIER},
#line 54 "src/parsing/keywords.txt"
     {"switch", Token::SWITCH},
#line 61 "src/parsing/keywords.txt"
     {"void", Token::VOID},
#line 40 "src/parsing/keywords.txt"
     {"import", Token::IMPORT},
#line 23 "src/parsing/keywords.txt"
     {"class", Token::CLASS},
#line 59 "src/parsing/keywords.txt"
     {"typeof", Token::TYPEOF},
#line 60 "src/parsing/keywords.txt"
     {"var", Token::VAR},
#line 39 "src/parsing/keywords.txt"
     {"implements", Token::FUTURE_STRICT_RESERVED_WORD},
#line 62 "src/parsing/keywords.txt"
     {"while", Token::WHILE},
     {"", Token::IDENTIFIER},
     {"", Token::IDENTIFIER},
     {"", Token::IDENTIFIER},
     {"", Token::IDENTIFIER},
     {"", Token::IDENTIFIER},
     {"", Token::IDENTIFIER},
     {"", Token::IDENTIFIER},
     {"", Token::IDENTIFIER},
     {"", Token::IDENTIFIER},
     {"", Token::IDENTIFIER},
     {"", Token::IDENTIFIER},
     {"", Token::IDENTIFIER}};

inline Token::Value PerfectKeywordHash::GetToken(const char* str, int len) {
  if (IsInRange(len, MIN_WORD_LENGTH, MAX_WORD_LENGTH)) {
    unsigned int key = Hash(str, len) & 0x3f;

    DCHECK_LT(key, arraysize(kPerfectKeywordLengthTable));
    DCHECK_LT(key, arraysize(kPerfectKeywordHashTable));
    if (len == kPerfectKeywordLengthTable[key]) {
      const char* s = kPerfectKeywordHashTable[key].name;

      while (*s != 0) {
        if (*s++ != *str++) return Token::IDENTIFIER;
      }
      return kPerfectKeywordHashTable[key].value;
    }
  }
  return Token::IDENTIFIER;
}

}  // namespace internal
}  // namespace v8

#endif  // V8_PARSING_KEYWORDS_GEN_H_