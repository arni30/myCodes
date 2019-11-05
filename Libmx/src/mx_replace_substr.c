#include "../inc/libmx.h"

char *mx_replace_substr(const char *str, const char *sub, const char *replace){
    char *new_str;
    char *dst = mx_strnew(sizeof(char*));
    int len_sub = mx_strlen(sub);
    int len_rep = mx_strlen(replace);
    char*  tmp  = dst;

    if (str != NULL && sub != NULL && replace != NULL) {
        while((new_str =mx_strstr(str, sub)) != NULL){
            mx_strncpy(dst, str, new_str - str);
            dst += new_str - str;
            mx_strncpy(dst, replace, len_rep);
            dst += len_rep;
            str  = new_str + len_sub;
        }
        while (*dst++ == *str++);
        return tmp;
    }
    return NULL;
}
