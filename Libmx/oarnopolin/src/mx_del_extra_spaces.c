#include "libmx.h"

char *mx_del_extra_spaces(const char *str){
    int flag = 0;
    char *res = mx_strnew(sizeof(char*));
    for (int i = 0, j = 0; i < mx_strlen(str); i++){
        if (mx_isspace(str[i]) && flag == 1){
            continue;
        }
        if (mx_isspace(str[i]) && flag == 0){
            res[j] = str[i];
            flag = 1;
            j++;
        }
        else{
            res[j] = str[i];
            flag = 0;
            j++;
        }
    }
    return mx_strtrim(res);
}
