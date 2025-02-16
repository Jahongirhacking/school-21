#ifndef PARSE_H
#define PARSE_H

#define MAX_TOKENS 100
#define MAX_TOKEN_LENGTH 10

void tokenize(const char *expr, char tokens[MAX_TOKENS][MAX_TOKEN_LENGTH], int *count);

int precedence(const char *op);

void to_rpn(char tokens[MAX_TOKENS][MAX_TOKEN_LENGTH], int count, char output[MAX_TOKENS][MAX_TOKEN_LENGTH], int *out_count);

int isDigit(char c);

#endif