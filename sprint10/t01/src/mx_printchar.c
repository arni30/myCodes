#include <unistd.h>
#include "mx_cp.h"

void mx_printchar(char c){
    write(1, &c, 1);
}

