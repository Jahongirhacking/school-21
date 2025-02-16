#ifndef CALCULATE_H
#define CALCULATE_H

#include "parse.h"

double calculate_rpn(char tokens[MAX_TOKENS][MAX_TOKEN_LENGTH], int count, double x);

#endif