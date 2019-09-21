void mx_swap_char(char *s1, char *s2);
int mx_strlen(const char *s);
void mx_str_reverse(char *s);

void mx_str_reverse(char *s){
    int len = mx_strlen(s) - 1;
        
    for(int i = len, j = 0; i > len / 2; i--, j++){
        mx_swap_char(&s[i], &s[j]);
    }
}
