#include "../inc/pathfinder.h"

void mx_print_extra_way(int *route, char **uni, int *c, int *c_e,
    unsigned long **matrix, int start, int end, int *flag, int *j) {
    int i = mx_find_extra_way(c, c_e, start, end, route, flag);

    mx_print_path(uni, start, end);
    mx_printstr("Route: ");
    mx_printstr(uni[start]);
    mx_print_route(uni, route, i);
    mx_print_dst(matrix, start, route, i);
    if(*flag == 2) {
        (*j)++;
        mx_print_extra_way(route, uni, c, c_e, matrix, start, end, flag, j);
    }
    *flag = 0;
}

