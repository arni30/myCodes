#include <unistd.h>

void mx_only_printable(void);

void mx_only_printable(void){
    for(int i = 127; i >= 32; i--){
    mx_printchar(i);
    }
    mx_printchar('\n');
}
