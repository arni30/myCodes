#include "../inc/libmx.h"

char *mx_file_to_str(const char *file){
    char file_rd = open(file , O_RDONLY, 0);
    char buf;
    int i = 0;
    int count = 0;
    size_t type;
    while ((type = read(file_rd,&buf,1)) > 0){
           
           count++;
    }
    close(file_rd);
    if(count == 0){
        return NULL;
    }
    char *str = mx_strnew(count);
    if(str != NULL && (file_rd = open(file, O_RDONLY)) != 0){
        while ((type = read(file_rd,&buf,1)) > 0){
           
           str[i] = buf;
           i++;
        }
        close(file_rd);
        return str;
    }
    return NULL;
}
