#include "libmx.h"

int mx_memcmp(const void *s1, const void *s2, size_t n){
    const char *buf_1 = s1;
    const char *buf_2 = s2;
    
    while(n--)
        if( *buf_1 != *buf_2 ){
            return *buf_1 - *buf_2;
        }
            buf_1++;
            buf_2++;
    return 0;
}
