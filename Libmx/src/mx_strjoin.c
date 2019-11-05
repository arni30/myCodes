#include "../inc/libmx.h"

char *mx_strjoin(const char *s1, const char *s2){
    if(s1 == NULL && s2 != NULL){
        return mx_strdup(s2);
    }
    if(s1 != NULL && s2 == NULL){
        return mx_strdup(s1);
    }
    if(s2 != NULL && s1 != NULL){
        return mx_strcat(mx_strdup(s1), mx_strdup(s2));
    }
    return NULL;
}
