#include "../inc/pathfinder.h"

void mx_print_dst(unsigned long **matrix, int start, int *route, int size_r) {
    int sum = matrix[start][route[size_r - 1]];

    mx_printstr("Distance: ");
    mx_printint(matrix[start][route[size_r - 1]]);
    for (int x = size_r - 1; x > 0; x--) {
        mx_printstr(" + ");
        mx_printint(matrix[route[x]][route[x - 1]]);
        sum += matrix[route[x]][route[x - 1]];
    }
    if (size_r > 1) {
        mx_printstr(" = ");
        mx_printint(sum);
    }
    mx_printchar('\n');
    mx_printstr("========================================\n");
}
