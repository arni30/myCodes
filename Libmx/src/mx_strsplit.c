#include "../inc/libmx.h"

char **mx_strsplit(const char *s, char c){
    if (s != NULL) {
        int count_words = mx_count_words(s, c);
        char **arr = malloc((count_words + 1) * sizeof(char *));
        for (int i = 0; i < count_words; i++) {
            while (*s == c) {
                s++;
            }
            arr[i] = (char *)malloc(count_words);
            for(int j = 0; *s != c; j++) {
                arr[i][j] = *s;
                s++;
            }
        }
        arr[count_words] = NULL;
        return arr;
    }
    return NULL;
}
