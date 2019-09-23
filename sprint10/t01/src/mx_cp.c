#include "mx_cp.h"
#include <fcntl.h>

void copy_from_file(char *file_input, char *file_output){
    char input = open(file_input, O_RDONLY,0);
    size_t type = 0;
    char buffer;
    
    if(open(file_output, O_RDONLY,0) < 0){
        char output = open(file_output, O_RDWR|O_CREAT,0666);
        while((type = read(input, &buffer, 1)) > 0){
            write(output, &buffer, 1);
        }
    }
    exit(1);
}
