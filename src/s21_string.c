#include "s21_string.h"

#include <stdlib.h>

unsigned int s21_strlen(const char *s) {
    if (s == NULL) return 0;
    unsigned int len = 0;
    while (s[len]) {
        len++;
    }
    return len;
}
