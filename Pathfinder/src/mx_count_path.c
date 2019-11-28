#include "../inc/pathfinder.h"

int mx_count_path(int start, int num_of_islands, int *c, int *c_extra){
    int count_path = 0;

    for (int i = start; i < num_of_islands; i++) {
        if (c[i] != -1) count_path++;
    }
    for (int i = start; i < num_of_islands; i++) {
        if (c_extra[i] != -1) {
            if (c_extra[i] != c[i]) {
                if (c_extra[c[i]] != c[c[i]] && c_extra[c[i]] != -1) count_path++;
                if (c_extra[c_extra[i]] != c[c_extra[i]] && c_extra[c_extra[i]] != -1) count_path++;
                count_path++;
            }
            else if (c_extra[c[i]] != c[c[i]] && c_extra[c[i]] != -1) count_path++;
        }
    }
    return count_path;
}
