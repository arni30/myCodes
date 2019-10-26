#include "libmx.h"

char *mx_strncpy(char *dst, const char *src, int len){
    char *changed = 
    int position = 0;
    if(dst == 0){
        return 0;
    }
    while ((position < len) && (*src)){
        *changed++ = *src++;
        position++;
    }
    changed[mx_strlen(changed)-1] = '\0';
    return changed;
}
