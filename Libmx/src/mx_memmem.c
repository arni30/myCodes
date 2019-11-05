#include "../inc/libmx.h"

void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len){
    int little_first = *(unsigned char *)little;
    const char *p = (const char*)big;
    size_t plen = big_len;

    if (!little_len){
        return NULL;
    }
    while (plen >= little_len && (p = mx_memchr(p, little_first, plen - little_len + 1)))
    {
        if (!mx_memcmp(p, little, little_len))
            return (void *)p;

        p += 1;
        plen = big_len - (p - (const char*)big);
    }
    return NULL;
}
