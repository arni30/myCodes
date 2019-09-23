#ifndef COPY_FILE
#define COPY_FILE
#define MX_ERROR "usage: ./mx_cp [source_file] [target_file]"
#define MX_ERROR2 strerror(2)
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void copy_from_file(char *file_input, char *file_output);
char *mx_strchr(const char *s, int c);
int mx_strlen(const char *s);
void mx_printchar(char c);
#endif 

