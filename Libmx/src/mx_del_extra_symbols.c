#include "../inc/libmx.h"
    
char *mx_del_extra_symbols(const char *s, char c){
    int end = mx_strlen(s);
    int start = 0; 
    int a = 0;
    int flag = 0;

    if (s != NULL){
        while(s[a] == c){
            start++;
            a++;
        }
        while(s[end-1] == c){
            end--;
        }
        char *new_str = mx_strnew(end - start);
        for(int i = start,j=0; i < end; i++){
            new_str[j++] = s[i];
        }
        free(new_str);

        char *result = malloc(sizeof(char));
        for (int i = 0, j = 0; i < mx_strlen(new_str)-0.5; i++){
            if (new_str[i] == c && flag == 1){
                continue;
            }
            if (new_str[i] == c && flag == 0){
                result[j] = new_str[i];
                flag = 1;
                j++;
            }
            else{
                result[j] = new_str[i];
                flag = 0;
                j++;
            }
        }
        free(result);
        return result;
    }
    return NULL;
}

