#include <stdlib.h>

void mx_strdel(char **str);

void mx_strdel(char **str){
    if(str != NULL){
        free(str);
        str = NULL;
    }
}

