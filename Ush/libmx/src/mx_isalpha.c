#include "libmx.h"

bool mx_isalpha(int c) {
    if ((65 <= c && c <= 90) || (97 <= c && c <= 122))
        return true;
    else
        return false;
}
