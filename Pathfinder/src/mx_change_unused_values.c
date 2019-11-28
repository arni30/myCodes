#include "../inc/pathfinder.h"

void mx_change_unused_values(int *c_extra, int *c, unsigned long *b, int start) {
    for (int i = 0; i < start; i++) {
        c_extra[i] = -1;
        c[i] = -1;
        b[i] = 2147483647;
    }
}
