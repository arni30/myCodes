#include <unistd.h>

void mx_printchar(char c);
void mx_printint(int n);

void mx_printint(int n){
    int num;
    int counter = 1;
    
    if(n == -2147483648){
        write(1, "-2147483648", 11);
        return;
    }
    if (n < 0){
        n *= -1; 
        mx_printchar('-');
    }
    num = n;
    while(num >= 10 || num <= -10){
        counter *= 10;
        num /= 10;
    }
    while(counter != 0){
        num = n / counter + '0';
        n %= counter;
        counter /= 10;
        mx_printchar(num);
    }
}

