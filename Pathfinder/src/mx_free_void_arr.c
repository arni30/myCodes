#include "../inc/pathfinder.h"

void mx_free_void_arr(void **arr, int lines) {
    for (int i = 0; i < lines; i++) {
        free(arr[i]);
    }
    free(arr);
}
