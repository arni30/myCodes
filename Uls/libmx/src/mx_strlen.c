#include "../inc/libmx.h"

int mx_strlen(const char *s){
    int counter = 0; 
    int i = 0;
    while (s[i] != '\0')
    {
        counter++;
        i++;
    }
    return counter;
}

