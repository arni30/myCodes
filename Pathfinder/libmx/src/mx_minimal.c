#include "../inc/libmx.h"

int mx_minimal(int a, int b){
    int min = a;

    if(a > b) min = b;
    return min;
}
