#include "../inc/libmx.h"

char *mx_strndup(const char *s1, size_t n){
    char *string = mx_strnew(mx_strlen(s1));
    return mx_strncpy(string, s1, n); 
}
