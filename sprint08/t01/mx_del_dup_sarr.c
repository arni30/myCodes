#include "duplicate.h"
#include <stdlib.h>

int main(){
    t_intarr *array = NULL;
    array->size = 3;
    array->arr = malloc(array->size);
    array->arr[0] = 1;
    array->arr[1]= 2;
    array->arr[2] = 3;
}

t_intarr *mx_del_dup_sarr(t_intarr *src) {
    int dup = 0;
    int count = 1;
    t_intarr *array1 = NULL;
    
    array1->arr = malloc(src->size);
    if (src->arr == NULL || src->size < 0){
        return NULL;
    }
    array1->arr[0] = src->arr[0];
    for (int i = 0; i < array1->size; i++){
        dup = 0;
        for (int j = 0; j < count; j++){
            if (src->arr[i] == src->arr[j]) {
                dup = 1;
            }
            if (dup == 0) {
                array1->arr[count] = src->arr[i];
                ++array1->size;
                count++;
            }
        }
    }
    array1->size = count + 1;
    if (array1->arr == NULL || array1->size < 0){
        return NULL;
    }
    free(array1);
    return array1;
}

