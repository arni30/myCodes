#include "../inc/libmx.h"

char *mx_del_extra_spaces(const char *str){
    if(str != NULL){
        int flag = 0;
        char *res = mx_strtrim(str);
        char *result = mx_strnew(mx_strlen(res));
        
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
        char *result1 = mx_realloc(result,mx_strlen(result));
        free(res);
        free(result);
        return result1;
    }
    return NULL;
}
