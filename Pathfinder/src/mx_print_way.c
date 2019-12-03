#include "../inc/pathfinder.h"

void mx_print_way(int *route, char **unique, int *c, int *c_e,
    unsigned long **matrix_dist, int start, int end, int *flag, int *j) {
    int i = mx_find_way(c, c_e, start, end, route, flag);

    mx_print_path(unique, start, end);
    mx_printstr("Route: ");
    mx_printstr(unique[start]);
    mx_print_route(unique, route, i);
    mx_print_dst(matrix_dist, start, route, i);
    if(*flag == 2) {
        (*j)++;
        mx_print_way(route, unique, c, c_e, matrix_dist, start, end, flag, j);
    }
}
