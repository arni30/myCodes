#include "mx_cp.h"
#include <stdio.h>

char *mx_strchr(const char *s, int c){
    while(*s != c){
        if(!*s++){
            return 0;
        }
    }
    return (char *)s;
}
