#include "../inc/pathfinder.h"

int mx_print_extra_way(int *route, char **unique, int *c, int *c_extra, unsigned long **matrix_distances, int start, int end) {
    int i = 1;
    int k = end;

    for (; c[k] != start; i++) {
        if (c_extra[k] != -1 && c_extra[k] != c[k]) {
            route[i] = mx_maximum(c_extra[k], c[k]);
            k = mx_maximum(c_extra[k], c[k]);
            continue;
        }
        route[i] = c[k];
        k = c[k];
    }
    for (int h = i - 1; h >= 0; h--) {
        mx_printstr(" -> ");
        mx_printstr(unique[route[h]]);
    }
    mx_printchar('\n');
    mx_print_dst(matrix_distances, start, route, i);
    return end + 1;
}
