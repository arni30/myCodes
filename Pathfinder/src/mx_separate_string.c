#include "../inc/pathfinder.h"

char **mx_separate_string(char *str) {
    char *temp = mx_replace_substr(str, "-", " ");
    char *str_new = mx_replace_substr(temp, ",", " ");
    char *matrix = mx_replace_substr(str_new, "\n", " ");
    char **res = mx_strsplit(matrix, ' ');
    
    free(temp);
    free(str_new);
    free(matrix);
    return res;
}
