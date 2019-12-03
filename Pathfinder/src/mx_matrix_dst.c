#include "../inc/pathfinder.h"

void mx_matrix_dst(char **unique, char **res) {
    int uni = mx_count_arr_el(unique);
    int counter = mx_count_arr_el(res);
    int *new_res = mx_arr_skip_first_string(unique, res);
    if(new_res == NULL) exit(1);
    int **matrix = mx_three_col_matrix(new_res, counter);
    if(matrix == NULL) exit(1);
    int lines = (counter - 1) / 3;
    unsigned long **new_matrix = malloc(uni * sizeof(unsigned long*));
    
    for (int i = 0; i < uni; i++) {
        new_matrix[i] = (unsigned long*)malloc(uni * sizeof(unsigned long));
        for (int j = 0; j < uni; j++) new_matrix[i][j] = 2147483647;
    }
    for (int i = 0; i < lines; i++) {
        new_matrix[matrix[i][0]][matrix[i][1]] = matrix[i][2];
        new_matrix[matrix[i][1]][matrix[i][0]] = matrix[i][2];
    }
    mx_dejkstry_algorithm(unique, new_matrix, uni);
    free(new_res);
    mx_free_void_arr((void**)matrix, lines);
    mx_free_void_arr((void**)new_matrix, uni);
}
