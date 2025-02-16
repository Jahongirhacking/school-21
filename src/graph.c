#include <stdio.h>
#include <math.h>

#include "parse.h"
#include "graph.h"
#include "calculate.h"

#ifndef M_PI
#define M_PI 3.1415
#endif

void plot_graph(char rpn[MAX_TOKENS][MAX_TOKEN_LENGTH], int rpn_count) {
    char grid[HEIGHT][WIDTH];
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            grid[i][j] = '.';
        }
    }
    
    for (int col = 0; col < WIDTH; col++) {
        double x = (4 * M_PI * col) / WIDTH;
        double y = calculate_rpn(rpn, rpn_count, x);
        int row = (int)((-y + 1) * HEIGHT / 2);
        if (row >= 0 && row < HEIGHT) {
            grid[row][col] = '*';
        }
    }
    
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            putchar(grid[i][j]);
        }
        putchar('\n');
    }
}


