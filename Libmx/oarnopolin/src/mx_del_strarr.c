#include "libmx.h"

void mx_del_strarr(char ***arr){
        for (unsigned long int i = 0; i < 12; i++)
        {
            mx_strdel(arr[i]);
        }
        free(*arr);
        arr = NULL;
}
