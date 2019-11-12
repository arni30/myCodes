#include "../inc/libmx.h"

int mx_memcmp(const void *s1, const void *s2, size_t n){
    unsigned char *s1_buf = (unsigned char*) s1;
    unsigned char *s2_buf = (unsigned char*) s2;
    for (size_t i = 0; i < n; i++) {
        if (s1_buf[i] != s2_buf[i]) {
            return s1_buf[i] - s2_buf[i];
        }
    }
    return 0;
}
