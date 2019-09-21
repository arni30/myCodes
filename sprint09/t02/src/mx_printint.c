#include "../inc/minilibmx.h"

void mx_printint(int n){
    int counter = 1;
    int num = n;

    if(n < 0){
        mx_printchar('-');
    }
    for (; num >= 10 || num <= -10; num /= 10){
        counter *= 10;
    }
    for(int i = 0; i < counter; counter /= 10){
        if(n < 0){
		    mx_printchar(n / counter * -1 + 48);
        }
        else{    
            mx_printchar(n / counter + '0');
            n %= counter;
        }
    }
}

