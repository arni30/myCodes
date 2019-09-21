#include <stdio.h>

char *mx_strcpy(char *dst, const char *src);
int mx_strlen(const char *s);
char *mx_strnew(const int size);
char *mx_strdup(const char *str);
char *mx_strjoin(char const *s1, char const *s2);
char *mx_strcat(char *s1, const char *s2);

char *mx_strjoin(char const *s1, char const *s2){
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
