#ifndef READ_FROM_FILE
#define READ_FROM_FILE
#define MX_ERROR "usage: ./read_file [file_path]"
#define MX_ERROR2 "error"
#include <unistd.h>
#include <stdio.h>
#include <string.h>
void read_from_file(char *file);
int mx_strlen(const char *s);
void mx_printchar(char c);
#endif 
