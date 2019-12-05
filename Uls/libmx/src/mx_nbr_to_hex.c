#include "../inc/libmx.h"

char *mx_nbr_to_hex(unsigned long nbr){
    char *hex = mx_strnew(16 * sizeof(char));
    char *hex_res = mx_strnew(16 * sizeof(char));
    int j = 0;

    for(unsigned long int i = nbr; i > 0; i=i/16){
        switch(i%16)
        {
            case 0:hex[j++] = '0';continue;
            case 1:hex[j++] ='1';continue;
            case 2:hex[j++] = '2';continue;
            case 3:hex[j++] = '3';continue;
            case 4:hex[j++] = '4';continue;
            case 5:hex[j++] = '5';continue;
            case 6:hex[j++] = '6';continue;
            case 7:hex[j++] = '7';continue;
            case 8:hex[j++] = '8';continue;
            case 9:hex[j++] = '9';continue;
            case 10:hex[j++] = 'a';continue;
            case 11:hex[j++] = 'b';continue;
            case 12:hex[j++] = 'c';continue;
            case 13:hex[j++] = 'd';continue;
            case 14:hex[j++] = 'e';continue;
            case 15:hex[j++] = 'f';continue;
        } 
    }
    for(int i = j - 1,k=0; i >= 0; i--, k++){
        hex_res[k] = hex[i];
    }
    return hex_res;   
}

