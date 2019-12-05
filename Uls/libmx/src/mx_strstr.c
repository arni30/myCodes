#include "../inc/libmx.h"

char *mx_strstr(const char *haystack, const char *needle){
    size_t n = mx_strlen(needle);

    while(*haystack){
        if(!mx_memcmp(haystack++,needle,n)){
            return (char*)haystack -1;
        }
    }
    return NULL;
}



