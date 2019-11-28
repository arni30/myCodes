#include "../inc/pathfinder.h"

void mx_main_step (int num_of_islands, int *temp, unsigned long *b, int *s,
    unsigned long **matrix_distances, int *c, int *c_extra) {
    for (int k = 0; k < num_of_islands; k++) {
        for (int i = 0; i < num_of_islands; i++) {
            if(s[i] != 0 ) temp[i] = 2147483647;
            else temp[i] = b[i];
        }
        int min = mx_min(temp, num_of_islands);
        s[min] = 1;
        for (int j = 0; j < num_of_islands; j++) {
            if (s[j] == 0) {
                if (b[j] > b[min] + matrix_distances[min][j]) {
                    b[j] = b[min] + matrix_distances[min][j];
                    c[j] = min;
                } 
                if (b[j] == b[min] + matrix_distances[min][j]) {
                    c_extra[j] = min;
                }
            }
        }
    }    
}
