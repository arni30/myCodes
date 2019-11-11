#include "../inc/libmx.h"

char *mx_replace_substr(const char *str, const char *sub, const char *replace){
    char *new_str;
    char *dst = mx_strnew(sizeof(char*));
    int len_sub = mx_strlen(sub);
    int len_rep = mx_strlen(replace);
    int len_str = mx_strlen(str);
    char *res = mx_strnew(mx_strlen(str));
    char *temp_str = mx_strnew(len_str); 
    mx_strcpy(temp_str, str);
    char*  tmp  = dst;

    if (str != NULL && sub != NULL && replace != NULL) {
        while((new_str = mx_strstr(str, sub)) != NULL){
            mx_strncpy(dst, str, new_str - str);
            dst += new_str - str;
            mx_strncpy(dst, replace, len_rep);
            dst += len_rep;
            str  = new_str + len_sub;
        }
        int len_tmp = mx_strlen(tmp);
        for (int i = len_tmp - len_rep + len_sub, j = 0; i < len_str; i++, j++){
            res[j] = temp_str[i];
        }
        printf("%s\n", res);
        printf("%s\n", tmp);
        char *result = mx_strnew(mx_strlen(tmp) + mx_strlen(res));
        mx_strcpy(result, tmp);
        strcat(result,res);
        free(res);
        free(temp_str);
        free(tmp);
        return result;
    }
    return NULL;
}
