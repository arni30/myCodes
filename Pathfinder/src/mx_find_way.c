#include "../inc/pathfinder.h"

int mx_find_way(int *c, int *c_e, int start, int end, int *route, int *flag) {
    int i = 1;
    int k = end;

    for (; c[k] != start || (c_e[k] != start && c_e[k] != -1); i++) {
        if (c_e[k] != -1 && c_e[k] != c[k] && *flag <= 2) {
            (*flag)++;
            route[i] = mx_minimal(c_e[k], c[k]);
            k = mx_minimal(c_e[k], c[k]);
            continue;
        }
        else if (c_e[k] != -1 && c_e[k] != c[k] && *flag > 2) {
            route[i] = mx_maximum(c_e[k], c[k]);
            k = mx_maximum(c_e[k], c[k]);
            continue;
        }
        route[i] = c[k];
        k = c[k];
    }
    return i;
}
