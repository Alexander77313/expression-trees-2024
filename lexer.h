#ifndef __LEXER_H__
#define __LEXER_H__

#include "string.h"
#include "list.h"

typedef enum token_type {
    TokenType_eof,
    TokenType_number,   // [+-]?[0-9]+(\.?[0-9]*)?([eE][0-9]*)?
    TokenType_symbol,   // [a-zA-Z]
    TokenType_add,      // +
    TokenType_subtract, // -
    TokenType_multiply, // *
    TokenType_divide,   // /
    TokenType_power,    // ^
    TokenType__count,
} TokenType;

typedef struct token {
    TokenType type;
    String content;
} Token;

extern const String token_type_string[];

extern List lexical_scan(const String* const string);

#endif // __LEXER_H__
