#include "../inc/libmx.h"

int mx_min(int *arr, int len){
    if(arr != NULL){
        int min = 0;
        for(int i = 0; i < len; i++){
            if(arr[i] < arr[min]){
                min = i;
            }
        }
        return min;
    }
    return 0;
}
