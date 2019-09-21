#include <stdbool.h>

int mx_comparator(const int *arr, int size, int x, bool (*compare)(int, int));
int mx_comparator(const int *arr, int size, int x, bool (*compare)(int, int)){
    for (int i = 0; i < size; i++){
        if(compare(arr[i], x) == 1){
            return i;
        }
    } 
    return -1;
}

