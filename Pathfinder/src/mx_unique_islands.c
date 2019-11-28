#include "../inc/pathfinder.h"

char **mx_unique_islands(char **str) {
    char **arr = (char **)malloc(mx_atoi(str[0]) * sizeof(char*));
    int count = 0;
    int counter;

    while (str[count]) count++;
    for (int i = 1; i < count; i += 3) {
        if (mx_strcmp(str[i], str[i+1]) == 0 && mx_atoi(str[i+2]) != 0) exit(1);
    }
    counter = mx_find_unique(count, str, arr);
    if (counter != mx_atoi(str[0])) {
        write(2, "error: invalid number of islands", mx_strlen("error: invalid number of islands"));
        exit(1);
    }
    arr = mx_swaps_arr(arr, counter);
    arr[counter] = NULL;
    return arr;
}
