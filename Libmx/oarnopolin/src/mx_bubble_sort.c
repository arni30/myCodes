#include "libmx.h"

int mx_bubble_sort(char **arr, int size){
    int counter = 0;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(mx_strcmp(arr[j],arr[j + 1]) == 1){
                char *buf = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = buf;
                counter++;
            }
        }
    }
    return counter;
}
