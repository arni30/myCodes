#include "libmx.h"

char *mx_strstr(const char *haystack, const char *needle){
    int flag = 0;
    int i = 0;

    if (haystack == NULL || needle == NULL) {
        return NULL;
    }
    for (i = 0; haystack[i] != '\0'; i++) {
        if (haystack[i] == needle[0]) {
            for (int j = i; ; j++) {
                if (needle[j-i] == '\0') {
                    flag = 1; break;
                }
                if (haystack[j] != needle[j-i]) {
                    break;
                }
            }
        }
        if (flag == 1) {
            break;
        }
    }
    if (flag == 1){
        return (char*)(haystack+i);
    }
    else {
        return NULL;
    }
}
