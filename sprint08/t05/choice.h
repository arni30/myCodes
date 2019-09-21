#ifndef CHOICE
#define CHOICE
#define MX_FAIL_PHRASE "Perhaps I was wrong about you, Neo."
#define MX_UNDEFINED_PHRASE "Are you sure about that?"
#define MX_SUCCESS_PHRASE "Follow me!"
#define MX_RED_PILL 0
#define MX_BLUE_PILL 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef char t_phrase;

char *mx_strcpy(char *dst, const char *src);
int mx_strlen(const char *s);
char *mx_strnew(const int size);
char *mx_strdup(const char *str);
t_phrase *choice(int pill);
#endif 
