#include "../inc/pathfinder.h"

void mx_output(unsigned long **matrix_distances, int l, char **unique, int num_of_islands, int *c, int *c_extra) {
    int start = l;
    int end = start + 1; 
    int count_path = mx_count_path(start, num_of_islands, c, c_extra);
    int flag = 0;
    int *route = malloc(100*sizeof(int*));

    for (int j = 0; j < count_path; j++) {
        route[0] = end;
        mx_print_path(unique, start, end);
        mx_printstr("Route: ");
        mx_printstr(unique[start]);
        if (flag == 1) {
            flag = 0;
            end = mx_print_extra_way(route, unique, c, c_extra, matrix_distances, start, end);//сделать рекурсионную для большего кол-ва путей!!!!!!!
            continue;
        }
        flag = mx_print_way(route, unique, c, c_extra, matrix_distances, start, end);
        if (flag == 0) end++;
    }
    free(route);
}
