#include "../inc/pathfinder.h"

void mx_matrix_dst(char **unique, char **res) {
    int count_unique = mx_count_arr_el(unique);
    int counter = mx_count_arr_el(res);
    int *new_res = mx_arr_skip_first_string(unique, res);
    int **matrix_distance = mx_three_col_matrix(new_res, counter);
    int lines = (counter - 1) / 3;
    unsigned long **new_matrix_distance = (unsigned long**)malloc(count_unique * sizeof(unsigned long*));//матрица расстояний
    
    for (int i = 0; i < count_unique; i++) {
        new_matrix_distance[i] = (unsigned long*)malloc(count_unique * sizeof(unsigned long));
        for (int j = 0; j < count_unique; j++) new_matrix_distance[i][j] = 2147483647;
    }
    for (int i = 0; i < lines; i++) {
        new_matrix_distance[matrix_distance[i][0]][matrix_distance[i][1]] = matrix_distance[i][2];
        new_matrix_distance[matrix_distance[i][1]][matrix_distance[i][0]] = matrix_distance[i][2];
    }
    mx_dejkstry_algorithm(unique, new_matrix_distance, count_unique);
    free(new_res);
    mx_free_void_arr((void**)matrix_distance, lines);
    mx_free_void_arr((void**)new_matrix_distance, count_unique);
}
