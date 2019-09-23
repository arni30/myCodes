#include "read_from_file.h"
#include <fcntl.h>
void read_from_file(char *file){
    ssize_t type = 0;
    char file_open = open(file, O_RDONLY, 0);
    char read_file;

    while((type = read(file_open, &read_file, 1)) > 0){
        mx_printchar(read_file);
    }
    mx_printchar('\n');
    close(file_open);
}
