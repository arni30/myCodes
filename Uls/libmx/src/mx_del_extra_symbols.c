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
        char *result = mx_strnew(mx_strlen(new_str));
        for (int i = 0, j = 0; i < mx_strlen(new_str); i++){
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
        char *res = mx_realloc(result, mx_strlen(result));
        free(new_str);
        free(result);
        return res;
    }
    return NULL;
}

