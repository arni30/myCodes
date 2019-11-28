#include "../inc/pathfinder.h"

int mx_print_way(int *route, char **unique, int *c, int *c_extra, unsigned long **matrix_distances, int start, int end) {
    int i = 1;
    int k = end;
    int flag = 0;

    for (; c[k] != start; i++) {
        if (c_extra[k] != -1 && c_extra[k] != c[k]) {
            flag = 1;
            route[i] = mx_minimal(c_extra[k], c[k]);
            k = mx_minimal(c_extra[k], c[k]);
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
    return flag;    
}
