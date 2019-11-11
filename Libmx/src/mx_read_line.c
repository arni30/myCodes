#include "../inc/libmx.h"

int mx_read_line(char **lineptr, int buf_size, char delim, const int fd){
    char *buf = mx_strnew(sizeof(char *));
    char *str = mx_strnew(sizeof(char *));
    size_t type;
    buf_size++;
    if (fd > 0){
        while ((type = read(fd,buf,1)) > 0) {
            mx_strcat(str, buf);
            if(mx_strlen(str) < buf_size){ 
                break;
            }
        }
        if(type < 0){
            return 0;
        }
        int index = mx_get_char_index(str, delim);
        if (index != -1) {
            mx_strncpy(*lineptr, str, index);
        }
        else{
            *lineptr = str;
            return 5;
        }
        close(fd);
        return index;
    }
    return -1;
}
