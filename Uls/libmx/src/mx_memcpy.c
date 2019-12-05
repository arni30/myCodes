#include "../inc/libmx.h"

void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n){
    char *dst_buf = dst;
    const char *src_buf = src;
    
    while (n--){
        *dst_buf++ = *src_buf++;
    }
    return dst;
}
