#include <stdbool.h>

bool mx_is_narcissistic(int num);
double mx_pow(double n, unsigned int pow);

bool mx_is_narcissistic(int num){
    int power = 0;
    int base;
    int sum;
    int number = num;

    for (int i = number; i > 0; i /= 10){
        power++;
    }
    while(number != 0){
        base = number % 10;
        sum = sum + mx_pow(base, power);
        number = number/10;
    }
    if(sum == num){
        return true;
    }
    else{
        return false;
    }
}
