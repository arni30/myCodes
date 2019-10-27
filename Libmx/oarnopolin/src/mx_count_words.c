#include "libmx.h"

int mx_count_words(const char *str, char c) {
    int count = 0;
    int i = 0;
    int word = 0;
    if (str != NULL) {
        while ((str[i] == ' ' || str[i] == c) && str[i] != '\0'){
        i++;
        word = 0;
            while (str[i] != '\0') {
                if (str[i] != c && word == 0){
                    word = 1;
                    count++;
                }
                else if (str[i] == c){
                    word = 0;
                }
                i++;
            } 
        }  
        return count;
    }
    return -1;
}
