#include "read_from_file.h"

int mx_strlen(const char *s){
    int count = 0;

    while(s[count]){
        count++;   
    }
    return count;
}

