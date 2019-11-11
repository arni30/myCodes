#include "../inc/libmx.h"
int main() {
    int fd = open("libmx.txt", O_RDONLY);
    char *str = mx_strnew(10000);
    int res = mx_read_line(&str, 20, 'f', fd);
    printf("%s\n", str);
    printf("%d",res);

}

