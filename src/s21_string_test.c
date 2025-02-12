#include "s21_string.h"

#include <stdio.h>

void s21_strlen_test() {
    struct {
        const char *input;
        unsigned int expected;
    } test_cases[] = {{"Hello", 5}, {"", 0}, {"1234567890", 10}, {NULL, 0}};

    for (int i = 0; i < 4; i++) {
        unsigned int result = s21_strlen(test_cases[i].input);
        printf("Test %d: Input: \"%s\", Expected: %u, Got: %u -> %s\n", i + 1,
               test_cases[i].input ? test_cases[i].input : "NULL", test_cases[i].expected, result,
               result == test_cases[i].expected ? "SUCCESS" : "FAIL");
    }
}

int main() {
    s21_strlen_test();
    return 0;
}