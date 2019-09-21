#ifndef FUNCTIONS
#define FUNCTIONS
#include <stdbool.h>
#include <unistd.h>
bool mx_isspace(char c);
void mx_printint(int n);
int mx_atoi(const char *str);
bool mx_isdigit(int c);
void mx_printchar(char c);
int mx_strlen(const char *s);
void mx_printstr(const char *s);
int mx_strcmp(const char *s1, const char *s2);
char *mx_strcpy(char *dst, const char *src);
#endif
