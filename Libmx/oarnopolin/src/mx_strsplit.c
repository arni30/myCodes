#include "libmx.h"

char **mx_strsplit(const char *s, char c){
    int count_words = mx_count_words(s, c);
    s = mx_del_extra_symbols(s, c);
    printf("%s", s);
    printf("%d\n",count_words);
    char **arr = malloc((count_words - 1)*sizeof(char*));
    int j = 0;
    for (int i = 0; i < count_words; i++){
        arr[i] = mx_strnew(sizeof(char*));
        while (s[j] != c)
        {
            arr[i][j-1] = s[j];
            j++;
        }
        j++;
        printf("%s",arr[i]);
    }
    
    return 0;
}
