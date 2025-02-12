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

void s21_strcmp_test() {
    struct {
        const char *str1;
        const char *str2;
        int expected;
    } test_cases[] = {
        {"abc", "abc", 0},
        {"abc", "abd", -1},
        {"abd", "abc", 1},
        {"", "", 0},
        {"abc", "", 1},
        {"", "abc", -1},
    };
    for (int i = 0; i < 6; i++) {
        int result = s21_strcmp(test_cases[i].str1, test_cases[i].str2);
        printf("Test %d: strcmp('%s', '%s') = %d | Expected = %d | %s\n",
               i + 1, test_cases[i].str1, test_cases[i].str2, result,
               test_cases[i].expected, result == test_cases[i].expected ? "SUCCESS" : "FAIL");
    }
}

void s21_strcpy_test() {
    struct {
        const char *src;
        const char *expected;
    } test_cases[] = {
        {"Hello", "Hello"},
        {"", ""},
        {NULL, NULL},
    };

    for (int i = 0; i < 3; i++) {
        char dest[100]; // Buffer to hold copied string
        char *result = s21_strcpy(dest, test_cases[i].src);

        // Check if the copy was successful
        int test_result = (result && test_cases[i].src && !s21_strcmp(dest, test_cases[i].expected)) ? 1 : 0;

        printf("Test %d: Source: \"%s\", Expected: \"%s\", Got: \"%s\" -> %s\n",
               i + 1,
               test_cases[i].src ? test_cases[i].src : NULL,
               test_cases[i].expected,
               dest,
               test_result ? "SUCCESS" : "FAIL");
    }
}

int main(int argc, char *argv[]) {
    if(argc > 1 && argv[1][0] == '1') {
        s21_strlen_test();
    } else if(argc > 1 && argv[1][0] == '2') {
        s21_strcmp_test();
    } else if(argc > 1 && argv[1][0] == '3') {
        s21_strcpy_test();
    }
    return 0;
}