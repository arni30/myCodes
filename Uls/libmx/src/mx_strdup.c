#include "../inc/libmx.h"

char *mx_strdup(const char *s1){
    char *string = mx_strnew(mx_strlen(s1));
    return mx_strcpy(string, s1); 
}

