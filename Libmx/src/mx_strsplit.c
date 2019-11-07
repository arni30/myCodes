#include "../inc/libmx.h"

char **mx_strsplit(const char *s, char c){
    // int count_words = mx_count_words(s, c);
    // int i = 0;
    // int start = 0;
    // int end = 0;
    // int j = 0;
    // char **arr = (char**) malloc(count_words * sizeof(char));

    // if(s != NULL && arr != NULL){
    //     while(s[i] != '\0'){
    //         while (s[i] != '\0' && s[i] == c){
    //             i++;
    //             start = i;
    //         }
    //         while (s[i] != '\0' && s[i] != c){
    //             i++;
    //             end = i;
    //         }
    //         arr[j] = mx_strndup(&s[start], end - start);
    //         j++;
    //     }
    //     return arr;
    // }
    // return NULL;
    if(s != NULL){
    char *new_str = mx_del_extra_symbols(s,c);
    int i = 0;
    int j = 0;
    int start = 0;
    int end = 0;
    char **res = malloc(mx_strlen(new_str));
    printf("%s", new_str);
        while(new_str[i] != '\0'){
            while(new_str[i] == c){
                
                start = i;
                i++;
                //printf("%d\n", i);
            }
            while(new_str[i] != '\0' && new_str[i] != c){
                end = i;
                i++;
                
                printf("%d\n", end);
            }
            //printf("%d\n", i);
        //printf("%d\n", end);
            res[j] = mx_strndup(&new_str[start], end - start);
            j++;
            //printf("%s\n", res[j]);
        }
        
        return res;
    }
    return NULL;

}
