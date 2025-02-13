#include "stack.h"

#include <stdio.h>
#include <stdlib.h>

Stack* init(int value) {
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    if (stack == NULL) {
        return NULL;
    }
    stack->data = value;
    stack->next = NULL;
    return stack;
}

Stack* push(Stack* stack, int value) {
    Stack* new_stack = init(value);
    if (stack == NULL) {
        return NULL;
    }
    new_stack->next = stack;
    return new_stack;
}

Stack* pop(Stack* stack) {
    if (stack == NULL) {
        return NULL;
    }
    Stack* temp = stack;
    stack = stack->next;
    free(temp);
    return stack;
}

void destroy(Stack* stack) {
    if (stack == NULL) {
        return;
    }
    destroy(stack->next);
    free(stack);
}

void print_stack(Stack* stack) {
    if (stack == NULL) {
        return;
    }
    while (stack != NULL) {
        printf(stack->next ? "%d " : "%d", stack->data);
        stack = stack->next;
    }
}