#include "libmx.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char *arr = "ARNI30";
    char *str = "i wanna go home";
    printf("%s",mx_strncpy(str, arr, 10));
} 
