#include "../inc/pathfinder.h"

char **mx_swaps_arr(char **arr, int counter) {
    for (int i = counter - 1, j = 0; i > (counter - 1) / 2; i--, j++) {
        char *temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return arr;
}
