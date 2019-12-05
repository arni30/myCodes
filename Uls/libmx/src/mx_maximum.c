#include "../inc/libmx.h"

int mx_maximum(int a, int b){
    int max = a;

    if(b > a) max = b;
    return max;
}
