#include "../inc/libmx.h"
int main() {
    char str[20], out[20];
    mx_strcpy(str, "hello there");
    mx_memccpy(out, str, ' ', 20);
    printf("%s", out);
    system("leaks -q main");
    return 0;
}
