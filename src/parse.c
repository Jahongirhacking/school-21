#include "parse.h"
#include "stack.h"

#include <string.h>

int isDigit(char c) {
    return (c >= '0' && c <= '9') ? 1 : 0;
}

int isAlpha(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

int isSpace(char c) {
    return c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r';
}


void tokenize(const char *expr, char tokens[MAX_TOKENS][MAX_TOKEN_LENGTH], int *count) {
    int i = 0, j = 0;
    *count = 0;
    while (expr[i] != '\0') {
        if (isSpace(expr[i])) {
            i++;
            continue;
        }
        
        if (isDigit(expr[i])) { 
            j = 0;
            while (isDigit(expr[i]) || expr[i] == '.') {
                tokens[*count][j++] = expr[i++];
            }
            tokens[*count][j] = '\0';
            (*count)++;
        } else if (isAlpha(expr[i])) { 
            j = 0;
            while (isAlpha(expr[i])) {
                tokens[*count][j++] = expr[i++];
            }
            tokens[*count][j] = '\0';
            (*count)++;
        } else {
            tokens[*count][0] = expr[i];
            tokens[*count][1] = '\0';
            (*count)++;
            i++;
        }
    }
}

int precedence(const char *op) {
    if (strcmp(op, "+") == 0 || strcmp(op, "-") == 0) return 1;
    if (strcmp(op, "*") == 0 || strcmp(op, "/") == 0) return 2;
    if (strcmp(op, "ln") == 0) return 3;
    return 0;
}

void to_rpn(char tokens[MAX_TOKENS][MAX_TOKEN_LENGTH], int count, char output[MAX_TOKENS][MAX_TOKEN_LENGTH], int *out_count) {
    OperatorStack operators = {.top = -1};
    *out_count = 0;
    
    for (int i = 0; i < count; i++) {
        if (isDigit(tokens[i][0]) || (tokens[i][0] == '-' && isDigit(tokens[i][1])) || strcmp(tokens[i], "x") == 0) {
            strcpy(output[(*out_count)++], tokens[i]);
        } else if (strcmp(tokens[i], "(") == 0) {
            push_op(&operators, tokens[i]);
        } else if (strcmp(tokens[i], ")") == 0) {
            while (operators.top >= 0 && strcmp(operators.tokens[operators.top], "(") != 0) {
                strcpy(output[(*out_count)++], pop_op(&operators));
            }
            pop_op(&operators);
        } else {
            while (operators.top >= 0 && precedence(operators.tokens[operators.top]) >= precedence(tokens[i])) {
                strcpy(output[(*out_count)++], pop_op(&operators));
            }
            push_op(&operators, tokens[i]);
        }
    }
    while (operators.top >= 0) {
        strcpy(output[(*out_count)++], pop_op(&operators));
    }
}
