#ifndef STACK_H
#define STACK_H

#include "parse.h"

#define MAX_STACK 100

typedef struct {
    char tokens[MAX_TOKENS][MAX_TOKEN_LENGTH];
    int top;
} OperatorStack;

typedef struct {
    double values[MAX_STACK];
    int top;
} ValueStack;

void push_op(OperatorStack *s, const char *value);
char *pop_op(OperatorStack *s);

void push_val(ValueStack *s, double value);
double pop_val(ValueStack *s);

#endif