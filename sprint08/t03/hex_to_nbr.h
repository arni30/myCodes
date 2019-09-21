#ifndef HEX_TO_NBR
#define HEX_TO_NBR

#include <stdbool.h>
bool mx_isdigit(int c);
bool mx_isupper(int c);
bool mx_islower(int c);
bool mx_isalpha(int c);
unsigned long mx_hex_to_nbr(const char *hex);
#endif
