#include "../inc/pathfinder.h"

void mx_file_errors(const char *file) {
    int file_open = open(file, 'r');
    int buf_size = 64;
    int size = 0;
    char buf[buf_size]; 

    if (file_open < 0) {
        write(2, "error: file ", mx_strlen("error: file "));
        write(2, file, mx_strlen(file));
        write(2, " does not exist\n", mx_strlen(" does not exist\n"));
        exit(1); 
    }
    if ((size = read(file_open, &buf, buf_size)) == 0) {
        close(file_open);
        write(2, "error: file ", mx_strlen("error: file "));
        write(2, file, mx_strlen(file));
        write(2, " is empty\n", mx_strlen(" is empty\n"));
        exit(1); 
    }
    close(file_open);
}
