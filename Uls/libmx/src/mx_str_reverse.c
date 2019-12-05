#include "../inc/libmx.h"

void mx_str_reverse(char *s){
    if (s) {
        int len = mx_strlen(s) - 1;
        for(int i = len, j = 0; i > len / 2; i--, j++){
            mx_swap_char(&s[i], &s[j]);
        }
    }
}
