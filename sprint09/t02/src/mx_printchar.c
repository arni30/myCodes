#include <unistd.h>
#include "../inc/minilibmx.h"

void mx_printchar(char c){
    write(1, &c, 1);
}

