#include "../inc/pathfinder.h"

int mx_find_extra_way(int *c, int *c_e, int st, int end, int *route, int *fl) {
    int i = 1;
    int k = end;

    for (; c[k] != st; i++) {
        if (c_e[k] != -1 && c_e[k] != c[k] && *fl <= 2) {
            (*fl)++;
            route[i] = mx_maximum(c_e[k], c[k]);
            k = mx_maximum(c_e[k], c[k]);
            continue;
        }
        else if (c_e[k] != -1 && c_e[k] != c[k] && *fl > 2) {
            route[i] = mx_minimal(c_e[k], c[k]);
            k = mx_minimal(c_e[k], c[k]);
            continue;
        }
        route[i] = c[k];
        k = c[k];
    }
    return i;
}
