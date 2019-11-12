#include "../inc/libmx.h"

char *mx_itoa(int number){
    char *res; 
    int counter = 1;
    int j = 0;
    int len = 1;

   
    int num = number;
    while(num >= 10 || num <= -10){
        counter *= 10;
        len++;
        num /= 10;
    }
    res = mx_strnew(len);
    if(number == -2147483648){
        res = "-2147483648";
        return res;
    }
    if (number < 0){
        number *= -1; 
        res[0] = '-';
        j = 1;
    }
    while(counter != 0){
        num = number / counter + '0';
        number %= counter;
        counter /= 10;
        res[j] = num;
        j++;
    }
    return res;
}  
