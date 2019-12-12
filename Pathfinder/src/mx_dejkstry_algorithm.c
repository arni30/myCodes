#include "../inc/pathfinder.h"

void mx_dejkstry_algorithm(char **unique, unsigned long **matrix, int island) {
    int *s = malloc(island * sizeof(int));
    int *c = malloc(island * sizeof(int));//путь
    unsigned long *b = malloc(island * sizeof(unsigned long));  
    int *c_e = malloc(island * sizeof(int));
    int *temp = malloc(sizeof(int) * island);

    if (s == NULL || c == NULL || b == NULL || c_e == NULL || temp == NULL) {
        exit(1);
    }
    for (int l = 0; l < island - 1; l++) {   
        mx_initialization(island, s, c_e, c, b, matrix, l);
        mx_main_step(island, temp, b, s, matrix, c, c_e);
        mx_output(matrix, l, unique, island, c, c_e);
    }
    free(temp);
    free(c_e);
    free(s);
    free(b);
    free(c);
}
