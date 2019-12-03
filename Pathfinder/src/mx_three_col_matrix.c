#include "../inc/pathfinder.h"

int **mx_three_col_matrix(int *arr, int len) {
    int lines = (len - 1) / 3;
    int columns = 3;
    int **matrix_distance = (int**)malloc(lines * sizeof(int*));
    if(matrix_distance == NULL) return NULL;
    int k = 0;

    for (int i = 0; i < lines; i++) {
        matrix_distance[i] = (int*)malloc(columns * sizeof(int));
        if(matrix_distance[i] == NULL) return NULL;
        for (int j = 0; j < columns; j++) {
            matrix_distance[i][j] = arr[k];
            k++;
        }
    }
    return matrix_distance;
}
