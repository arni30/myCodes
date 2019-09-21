#include <stdio.h>
#include <stdlib.h>
void mx_strdel(char **str);
void mx_del_strarr(char ***arr);

void mx_del_strarr(char ***arr){
    if(arr != NULL){
        mx_strdel(*arr);
        free(arr);
        *arr = NULL;
    }
}
