#include "libmx.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
        char name[] = "\f  My name... is Neo  \t\n ";
        printf("%s\n",mx_strtrim(name));
    
} 
