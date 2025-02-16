#include "calculate.h"
#include "stack.h"
#include "parse.h"

#include <string.h>
#include <stdlib.h>
#include <math.h>

double calculate_rpn(char tokens[MAX_TOKENS][MAX_TOKEN_LENGTH], int count, double x) {
    ValueStack values = {.top = -1};
    
    for (int i = 0; i < count; i++) {
        if (isDigit(tokens[i][0]) || (tokens[i][0] == '-' && isDigit(tokens[i][1]))) {
            push_val(&values, atof(tokens[i]));
        } else if (strcmp(tokens[i], "x") == 0) {
            push_val(&values, x);
        } else {
            double b = pop_val(&values);
            double a = (values.top >= 0) ? pop_val(&values) : 0.0;
            if (strcmp(tokens[i], "+") == 0) push_val(&values, a + b);
            else if (strcmp(tokens[i], "-") == 0) push_val(&values, a - b);
            else if (strcmp(tokens[i], "*") == 0) push_val(&values, a * b);
            else if (strcmp(tokens[i], "/") == 0) push_val(&values, a / b);
            else if (strcmp(tokens[i], "ln") == 0) push_val(&values, log(b));
            else if (strcmp(tokens[i], "sin") == 0) push_val(&values, sin(b));
            else if (strcmp(tokens[i], "cos") == 0) push_val(&values, cos(b));
            else if (strcmp(tokens[i], "tan") == 0) push_val(&values, tan(b));
            else if (strcmp(tokens[i], "ctg") == 0) push_val(&values, 1.0/tan(b));
            else if (strcmp(tokens[i], "sqrt") == 0) push_val(&values, sqrt(b));
        }
    }
    return pop_val(&values);
}