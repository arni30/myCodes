#include "../inc/libmx.h"

bool mx_isspace(char c){
    if(c == 32 || (c <= 13 && c >= 9)){
        return 1;
    }
    else{
        return 0;    
    }
}
