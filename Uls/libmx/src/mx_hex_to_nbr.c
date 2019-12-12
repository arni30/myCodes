#include "../inc/libmx.h"

unsigned long mx_hex_to_nbr(const char *hex){
    int power = 0;
    int j = 0;
    unsigned long dig = 0;
    unsigned long result = 0;
    for(int i = 0; hex[i];i++) power++;
    for(int i = 0; i < power ; i++) {
        if(hex[i] >= 97 && hex[i] <= 122){
            if(hex[i] == 'a') dig = 10;
            if(hex[i] == 'b') dig = 11;
            if(hex[i] == 'c') dig = 12;
            if(hex[i] == 'd') dig = 13;
            if(hex[i] == 'e') dig = 14;
            if(hex[i] == 'f') dig = 15;
        }            
        else if(hex[i] >= 65 && hex[i] <= 90){
            if(hex[i] == 'A') dig = 10;
            if(hex[i] == 'B') dig = 11;
            if(hex[i] == 'C') dig = 12;
            if(hex[i] == 'D') dig = 13;
            if(hex[i] == 'E') dig = 14;
            if(hex[i] == 'F') dig = 15;
        }
        else{
            dig = hex[i] - 48;
        }
        for(j = 1; j < power - i; j++){
            if(i == (power - 1)) dig *= 1;
            else dig*=16;
        }
        result += dig;
    }
    return result;   
}
