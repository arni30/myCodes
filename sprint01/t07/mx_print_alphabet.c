#include <unistd.h>

void mx_print_alphabet(void);

void mx_print_alphabet(void){
    for(int i = 65; i < 91; i++){
        if(i % 2 == 0){
            mx_printchar(i + 32);
        }
        else{
            mx_printchar(i);
        }

    }
    mx_printchar('\n');
}
