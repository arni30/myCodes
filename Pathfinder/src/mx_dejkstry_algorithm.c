#include "../inc/pathfinder.h"

void mx_dejkstry_algorithm(char **unique, unsigned long **matrix_distances, int num_of_islands) {
    int *s = malloc(num_of_islands * sizeof(int));//массив вершин 1-рассмотрена 0-нерассмотрена
    int *c = malloc(num_of_islands * sizeof(int));//путь
    unsigned long *b = malloc(num_of_islands * sizeof(unsigned long));  
    int *c_extra = malloc(num_of_islands * sizeof(int));
    int *temp = malloc(sizeof(int) * num_of_islands);//массив для поиска минимальных расстояний

    for (int l = 0; l < num_of_islands - 1; l++) {   
        mx_initialization(num_of_islands, s, c_extra, c, b, matrix_distances, l);
        mx_main_step(num_of_islands, temp, b, s, matrix_distances, c, c_extra);
        mx_change_unused_values(c_extra, c, b, l);
        mx_output(matrix_distances, l, unique, num_of_islands, c, c_extra);
    }
    free(temp);
    free(c_extra);
    free(s);
    free(b);
    free(c);
}
