#include "../inc/libmx.h"

char *mx_strncpy(char *dst, const char *src, int len){
    char *changed = dst;
    for (int i = 0; i < len; i++) {
        *dst++ = *src++;
    }
    return changed;
}
