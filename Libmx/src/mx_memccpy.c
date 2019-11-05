#include "../inc/libmx.h"

void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n){    
    unsigned char *dst_buf = (unsigned char*)dst;
    unsigned char *src_buf = (unsigned char*)src;

    while (n--){
		if ((*dst_buf = *src_buf) == (unsigned char)c)
			return (dst_buf + 1);
		++dst_buf;
		++src_buf;
	}
	return (NULL);
}
