#include "../inc/libmx.h"

double mx_pow(double n, unsigned int pow){
    double result = 1.0;
    
    if(pow == 0){
        return 1;
    }
    else if(pow == 1){
        return n;
    }
    else if (pow > 1){
        for(unsigned int i = 0; i < pow; i++){
            result *= n;
        }
    return result;
    }
    return 0;
}
