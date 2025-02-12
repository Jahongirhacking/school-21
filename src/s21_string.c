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

int s21_strcmp(const char *str1, const char *str2) {
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    return *(unsigned char *)str1 - *(unsigned char *)str2;
}

char *s21_strcpy(char *dest, const char *src) {
    if (dest == NULL || src == NULL) {
        *dest = NULL;
        return NULL;
    }
    char *original_dest = dest; // Save the starting point of dest
    while (*src != '\0') { // Copy until we hit the null terminator
        *dest = *src;  // Copy character from src to dest
        dest++;
        src++;
    }
    *dest = '\0';  // Null-terminate the destination string
    return original_dest; // Return the starting address of dest
}
