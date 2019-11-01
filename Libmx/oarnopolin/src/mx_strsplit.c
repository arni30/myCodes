#include "libmx.h"

char **mx_strsplit(const char *s, char c){
    int count_words = mx_count_words(s, c);
    int i = 0;
    int start = 0;
    int end = 0;
    int j = 0;
    char **arr = (char**) malloc((count_words) * sizeof(char*));

    if(s != NULL && arr != NULL){
        while(s[i] != '\0'){
            while (s[i] != '\0' && s[i] == c){
                i++;
                start = i;
            }
            while (s[i] != '\0' && s[i] != c){
                i++;
                end = i;
            }
            arr[j] = mx_strndup(&s[start], end - start);
            j++;
        }
        return arr;
    }
    return NULL;
}
