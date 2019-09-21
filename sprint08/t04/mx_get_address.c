#include "get_address.h"
#include <stdlib.h>

char *mx_get_address(void *p){
    char *a = mx_nbr_to_hex((unsigned long)&(*p));
    int len = mx_strlen(a) + 2;
    char *adress = mx_strnew(len - 2);
    char pp[len];
    pp[0] = '0';
    pp[1] = 'x';
    
    for(int i = 0; i < len + 2; i ++){
        pp[2 + i] = a[i];
    }
    free(adress); 
    return mx_strcpy(adress, pp);
}
