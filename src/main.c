#include "parse.h"
#include "graph.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 256

int main() {
    char expression[MAX_LENGTH];
    printf("Enter the expression: ");
    if(fgets(expression, MAX_LENGTH*sizeof(char), stdin) == NULL) {
        printf("n/a");
        return 0;
    }
    char tokens[MAX_TOKENS][MAX_TOKEN_LENGTH];
    int count = 0;
    
    tokenize(expression, tokens, &count);
    char rpn[MAX_TOKENS][MAX_TOKEN_LENGTH];
    int rpn_count = 0;
    to_rpn(tokens, count, rpn, &rpn_count);
    
    plot_graph(rpn, rpn_count);
    
    return 0;
}
