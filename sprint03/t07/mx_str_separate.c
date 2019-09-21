void mx_str_separate(const char *str, char delim);
void mx_printchar(char c);

void mx_str_separate(const char *str, char delim){
    while(*str){
        if(*str == delim && *str != *(str+1)){
            mx_printchar('\n');
        }
        else if(*str != delim){       
        mx_printchar(*str);
        }
        str++;
    }
    mx_printchar('\n');
}
