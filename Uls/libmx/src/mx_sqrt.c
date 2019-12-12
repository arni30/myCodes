#include "../inc/libmx.h"

int mx_sqrt(int x){
    int i = 1;
    int result = 0;
    int num = x;
    while(x > 0){
        x -= i;
        i +=2;
        result += x < 0 ? 0 : 1;
    }    
    if(result * result != num){
        return 0;
    }    
    return result;
}
