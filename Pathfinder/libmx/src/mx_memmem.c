#include "../inc/libmx.h"

void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len){
    unsigned char * big_buf = (unsigned char* ) big;
    unsigned char * little_buf = (unsigned char* ) little;
    int flag = 0;
    for (size_t i = 0; i < big_len; i++) {
        flag = 1;
        for (size_t j = 0; j < little_len; j++) {
            if (i + j >= big_len) return 0;
            if (big_buf[i+j] != little_buf[j]) {
                flag = 0;
                break;
            }
        }
        if (flag == 1) return &big_buf[i];
    }
    return NULL;
}
