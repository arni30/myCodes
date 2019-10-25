#include "libmx.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
   
    char *arr = mx_strnew(10000);
    mx_strdel(&arr);
    printf("%s",arr);
} 