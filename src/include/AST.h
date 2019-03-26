#ifndef TSCC_AST_H
#define TSCC_AST_H
#include "token.h"
typedef struct AST_STRUCT {
    enum {
        AST_BINOP,
        AST_INTEGER,
        AST_COMPOUND,
        AST_DATATYPE,
        AST_FUNCTION_DEFINITION,
        AST_VARIABLE_DEFINITION
    } type;

    token* token;
} AST;

void AST_constructor(AST* ast, token* t, int type);
#endif
