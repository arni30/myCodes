#include <unistd.h>

void mx_hexadecimal(void);

void mx_hexadecimal(void){
    for(int i = 48; i <= 71; i++){
	if(i < 58 || (i > 64 && i < 71)){
            mx_printchar(i);
        }
    }
    mx_printchar('\n');
}

