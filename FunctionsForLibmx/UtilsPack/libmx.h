#define MX_LIBRARY
#ifdef MX_LIBRARY

#include <wchar.h>
#include <unistd.h>
#include <stdlib.h>

int mx_strlen(const char *s);
char *mx_strcat(char *s1, const char *s2);
char *mx_strnew(const int size);
char *mx_nbr_to_hex(unsigned long nbr);
void mx_printchar(char c);
void mx_print_unicode(wchar_t c);

#endif

