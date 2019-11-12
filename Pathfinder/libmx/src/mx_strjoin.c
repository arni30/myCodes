#include "../inc/libmx.h"

char *mx_strjoin(const char *s1, const char *s2){
    if(s1 == NULL && s2 != NULL){
        return mx_strdup(s2);
    }
    if(s1 != NULL && s2 == NULL){
        return mx_strdup(s1);
    }
    if(s2 != NULL && s1 != NULL){
        char *s3 = mx_strnew(mx_strlen(s1) + mx_strlen(s2));
        mx_strcpy(s3, s1);
	    mx_strcat(s3, s2);
        return s3;
    }
    return NULL;
}
