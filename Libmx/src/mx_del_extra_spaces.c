#include "../inc/libmx.h"

char *mx_del_extra_spaces(const char *str){
    int flag = 0;
    char *res = mx_strnew(sizeof(char*));
    res = mx_strtrim(str);
    char *result = mx_strnew(sizeof(char*));
    for (int i = 0, j = 0; i < mx_strlen(res); i++){
        if (mx_isspace(res[i]) && flag == 1){
            continue;
        }
        if (mx_isspace(res[i]) && flag == 0){
            result[j] = res[i];
            flag = 1;
            j++;
        }
        else{
            result[j] = res[i];
            flag = 0;
            j++;
        }
    }
    return result;
}
