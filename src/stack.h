#ifndef STACK_H
#define STACK_H

// Stack Node Structure
typedef struct stack {
    int data;
    struct stack* next;
} Stack;


// Function Prototypes
Stack* init(int value);
Stack* push(Stack* stack, int value);
Stack* pop(Stack* stack);
void destroy(Stack* stack);
void print_stack(Stack* stack);

#endif //STACK_H
