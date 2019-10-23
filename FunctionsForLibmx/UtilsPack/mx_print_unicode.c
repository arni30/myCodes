#include "libmx.h"
#include <stdio.h>
void mx_print_unicode(wchar_t c){
    printf("%x\n",c);
    // unsigned long n = c;
    // //n++;
    // char *str = NULL;
    // char *s = mx_nbr_to_hex(n);
    // printf("%d\n", mx_strlen(s));
    // if(mx_strlen(s) == 3){
    //     str = mx_strcat("\\U00000", s);
    // }
     //arr[8] = {0,0,0,0,0,0,0,0};
   // for (int i = 0; i 
    //printf("%s\n", s);
    write(1, "\U0001f921", 3);
}
