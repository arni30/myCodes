#include <unistd.h>
#include "read_from_file.h"

void mx_printchar(char c){
    write(1, &c, 1);
}

