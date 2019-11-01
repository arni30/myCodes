#include "libmx.h"

void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n){    
    char *dst_buf = dst;
    const char *src_buf = src;

    while (*src_buf != c && n--){
        *dst_buf++ = *src_buf++;
    }
    return dst;
}
