#include "../inc/libmx.h"

char *mx_strndup(const char *s1, size_t n){
    char *string = mx_strnew(mx_strlen(s1));
    return (char*)mx_memcpy(string, s1, n); 
}
