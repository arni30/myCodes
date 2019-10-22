#include <stdlib.h>

char *mx_strnew(const int size);

char *mx_strnew(const int size){
    char *str = malloc(size+1*sizeof(char));
    if(str == NULL){
        return NULL;
    }
    for(int i = 0; i < size; i++){
        str[i] = 'a';
    }
    str[size] = '\0';
    return str;
}
