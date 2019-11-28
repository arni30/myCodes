#include "../inc/pathfinder.h"

int mx_find_unique(int count, char **str, char **arr) {
    int flag = 0;
    int j = 0;
    int counter = 0;

    for (int i = count - 1; i > 0; i--) {
        flag = 0;
        if (mx_atoi(str[i]) != 0) continue;
        for (j = i - 1; j > 0; j--) {
            if (mx_atoi(str[j]) != 0) continue;
            if (mx_strcmp(str[i], str[j]) == 0) flag = 1;
        }
        if (flag == 0) {
            arr[counter] = str[i];
            counter++;
        }
    }
    return counter;
}
