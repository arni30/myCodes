#include <stdbool.h>
#include <stdio.h>

char *mx_del_extra_whitespaces(const char *str);
int mx_strlen(const char *s);
char *mx_strnew(const int size);
void mx_strdel(char **str);
bool mx_isspace(char c);
char *mx_strncpy(char *dst, const char *src, int len);
char *mx_strtrim(const char *str);

int main(){
    char *name = "\f  My name...     is  \r Neo  \t\n ";
    mx_del_extra_whitespaces(name);
}