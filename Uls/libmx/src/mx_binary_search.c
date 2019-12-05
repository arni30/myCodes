#include "../inc/libmx.h"

int mx_binary_search(char **arr, int size, const char *s, int *count){
    int left = -1;
    int right = size;
    while(left < right -1){
        (*count)++;
        int middle = (left+right) / 2; 
        if(mx_strcmp(arr[middle], s) < 0){
            left = middle;
        }
        else if(mx_strcmp(arr[middle],s) == 0){
            return middle;
        }
        else{
            right = middle;
        }
    }
    (*count) = 0;
    return -1;
}

