#include "../inc/pathfinder.h"

void mx_initialization(int num_of_islands, int *s, int *c_extra, int *c,
    unsigned long *b, unsigned long **matrix_distances, int l) {
    for(int i = 0; i < num_of_islands; i++) {
        s[i] = 0;
        c_extra[i] = -1;
        c[i] = l; //рассматривемую вершину
        b[i] = matrix_distances[l][i];
    }
    c[l] = -1;//путь до самой себя
    s[l] = 1; //рассматриваемая вершина
}
