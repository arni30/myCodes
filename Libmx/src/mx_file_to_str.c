#include "../inc/libmx.h"

char *mx_file_to_str(const char *file){
    char file_rd = open(file , O_RDONLY, 0);
    char *buf = mx_strnew(sizeof(char *));
    char *str = mx_strnew(sizeof(char *));
    size_t type;
    if(str != NULL && buf != NULL && file != 0){
        while ((type = read(file_rd,buf,1)) > 0){
           str = mx_strjoin(str,buf);
        }
        mx_strdel(&buf);
        close(file_rd);
        return str;
    }
    return NULL;
}
