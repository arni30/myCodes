#include "../inc/libmx.h"

int mx_get_char_index(const char *str, char c){
    if(str != NULL){
        int count = -1;
        int i = 0;
        while(str[i] != '\0'){
            if(str[i] == c){
                count = i;
                break;
            }
            i++;
        }
        return count;
    }
    return -2;
}
