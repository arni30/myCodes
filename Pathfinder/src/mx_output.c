#include "../inc/pathfinder.h"

void mx_output(unsigned long **matrix, int l,
    char **uni, int n_uni, int *c, int *c_e) {
    int start = l;
    int end = start + 1; 
    int count_path = mx_count_path(start, n_uni, c, c_e);
    int flag = 0;
    int *r = malloc(100*sizeof(int*));
    if(r == NULL) exit(1);

    for (int j = 0; j < count_path; j++) {
        r[0] = end;
        if (flag > 0) {
            flag = 0;
            mx_print_extra_way(r, uni, c, c_e, matrix, start, end, &flag, &j);
            end++;
            continue;
        }
        mx_print_way(r, uni, c, c_e, matrix, start, end, &flag, &j);
        if (flag == 0) end++;
    }
    free(r);
}
