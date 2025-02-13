#include "stack.h"

#include <stdio.h>

void init_test() {
    printf("init_test: ");
    const int values[] = {1, 2, 3, 4};
    int status = 0;
    Stack* stack = init(values[0]);
    if (stack->data == values[0]) {
        status = 1;
    }
    print_stack(stack);
    printf(" %s\n", status ? "SUCCESS" : "FAIL");
    destroy(stack);
}
void push_test() {
    printf("push_test: ");
    const int values[] = {1, 2, 3, 4};
    int status = 0;
    Stack* stack = push(push(init(values[0]), values[1]), values[2]);
    if (stack->data == values[2] && stack->next->data == values[1] && stack->next->next->data == values[0]) {
        status = 1;
    }
    print_stack(stack);
    printf(" %s\n", status ? "SUCCESS" : "FAIL");
    destroy(stack);
}
void pop_test() {
    printf("pop_test: ");
    const int values[] = {1, 2, 3, 4};
    int status = 0;
    Stack* stack = push(push(init(values[0]), values[1]), values[2]);
    stack = pop(stack);
    if (stack->data == values[1] && stack->next->data == values[0]) {
        status = 1;
    }
    print_stack(stack);
    printf(" %s\n", status ? "SUCCESS" : "FAIL");
    destroy(stack);
}
void destroy_test() {
    printf("destroy_test: ");
    const int values[] = {1, 2, 3, 4};
    Stack* stack = push(push(init(values[0]), values[1]), values[2]);
    destroy(stack);
    printf("SUCCESS\n");
}

int main() {
    init_test();
    push_test();
    pop_test();
    destroy_test();
}