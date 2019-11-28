#include "../inc/pathfinder.h"

void mx_print_dst(unsigned long **matrix_distances, int start, int *route, int size_route) {
    int sum = matrix_distances[start][route[size_route - 1]];

    mx_printstr("Distance: ");
    mx_printint(matrix_distances[start][route[size_route - 1]]);
    for (int x = size_route - 1; x > 0; x--) {
        mx_printstr(" + ");
        mx_printint(matrix_distances[route[x]][route[x - 1]]);
        sum += matrix_distances[route[x]][route[x - 1]];
    }
    if (size_route > 1) {
        mx_printstr(" = ");
        mx_printint(sum);
    }
    mx_printchar('\n');
    mx_printstr("========================================\n");
}
