#include "../inc/pathfinder.h"

int mx_count_path(int start, int num_of_islands, int *c, int *c_e){
    int count_path = 0;

    for (int i = start; i < num_of_islands; i++) {
        if (c[i] != -1) count_path++;
    }
    for (int i = start; i < num_of_islands; i++) {
        if (c_e[i] != -1) {
            if (c_e[i] != c[i]) {
                if (c_e[c[i]] != c[c[i]] && c_e[c[i]] != -1) count_path++;
                if (c_e[c_e[i]] != c[c_e[i]] && c_e[c_e[i]] != -1) { 
                    count_path++;
                }
                count_path++;
            }
            else if (c_e[c[i]] != c[c[i]] && c_e[c[i]] != -1) count_path++;
        }
    }
    return count_path;
}
