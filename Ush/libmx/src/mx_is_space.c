#include "libmx.h"

int mx_is_space(char c) {
	if (c == 32 || c == '\t' || c == '\n' 
	|| c == '\v' || c == '\r' || c == '\f') 
		return 1;
	return 0;
}
