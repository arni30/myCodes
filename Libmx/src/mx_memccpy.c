#include "../inc/libmx.h"

void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n){    
	unsigned char *dst_buf = (unsigned char*) dst;
    unsigned char *src_buf = (unsigned char*) src;
    size_t i = 0;
    for (i = 0; i < n; i++) {
        if (src_buf[i] == c) break;
        dst_buf[i] = src_buf[i];
    }
    return &dst_buf[i];
}
