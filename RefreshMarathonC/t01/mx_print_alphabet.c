void mx_printchar(char c);
void mx_print_alphabet(void);

void mx_print_alphabet(void){
    for(char i = 65, j = 98; i <= 91 && j <= 122; i+=2,j+=2){
        mx_printchar(i);
        mx_printchar(j);
    }
    mx_printchar('\n');
}

