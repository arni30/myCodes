#include <stdlib.h>

char *mx_strcpy(char *dst, const char *src);
int mx_strlen(const char *s);
char *mx_strnew(const int size);
char *mx_strdup(const char *str);
char *mx_strjoin(char const *s1, char const *s2);
char *mx_strcat(char *s1, const char *s2);
void mx_strdel(char **str);
char *mx_concat_words(char **words);

char *mx_concat_words(char **words){
    if(words != NULL){
        char *new_arr = mx_strdup(words[0]);
        words++;
        while(*words){
            char *trash = new_arr;
            new_arr = mx_strjoin(new_arr, mx_strjoin(" ",*words));
            words++;  
            mx_strdel(&trash);
        }
        return new_arr;
    }
    return NULL;
}

