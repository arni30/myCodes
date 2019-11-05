#include "../inc/libmx.h"

char *mx_strcat(char *s1, const char *s2){
    int i = mx_strlen(s1);
    int j = mx_strlen(s2);
    
    for (int j = 0; s2[j] != '\0'; j++){
        s1[i+j] = s2[j];
    }
    s1[i+j] = '\0';
    return s1;
}
