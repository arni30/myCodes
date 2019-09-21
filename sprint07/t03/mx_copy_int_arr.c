#include <stdlib.h>

int *mx_copy_int_arr(const int *src, int size);

int *mx_copy_int_arr(const int *src, int size){
    if(NULL == src){
        return NULL;
    }
    int *dst = (int*)malloc(size*sizeof(int));
    for(int i = 0; i < size + 1;i++){
        *(dst + i) = *(src + i);
    }
    if(NULL != dst){
        return dst;
    }
return NULL;
}

