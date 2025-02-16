#include "stack.h"

#include <string.h>

void push_op(OperatorStack *s, const char *value) {
    if (s->top < MAX_STACK - 1) {
        strcpy(s->tokens[++s->top], value);
    }
}

char *pop_op(OperatorStack *s) {
    if (s->top >= 0) {
        return s->tokens[s->top--];
    }
    return "";
}

void push_val(ValueStack *s, double value) {
    if (s->top < MAX_STACK - 1) {
        s->values[++s->top] = value;
    }
}

double pop_val(ValueStack *s) {
    if (s->top >= 0) {
        return s->values[s->top--];
    }
    return 0.0;
}
