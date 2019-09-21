#include <stdbool.h>

bool mx_is_odd(int value);

bool mx_is_odd(int value){
    if(value % 2 == 0){
        return false;
    }
    else if(value % 2 != 0){
        return true ;
    }
    return 0;
}
