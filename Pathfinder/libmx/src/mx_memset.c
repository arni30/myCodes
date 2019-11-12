#include "../inc/libmx.h"

void *mx_memset(void *b, int c, size_t len){
    char *buf = b;
    
    while(len--){
        *buf++ = c;
    }
    return b;
}
