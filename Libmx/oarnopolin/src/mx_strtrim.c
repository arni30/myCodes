#include "libmx.h"

char *mx_strtrim(const char *str){
    int end = mx_strlen(str);
    int start = 0; 
    int a = 0;

    if (str != NULL){
        while(mx_isspace(str[a])){
            start++;
            a++;
        }
        while(!mx_isspace(str[end])){
            end--;
        }
        char *new_str = mx_strnew(end - start);
        for(int i = start,j=0; i < end; i++){
            mx_strncpy(&new_str[j++],&str[i],end-start);
        }
        //mx_strdel(&new_str);
        return new_str;
    }
    return NULL;
}
     

          

