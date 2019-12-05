#include "../inc/libmx.h"

int mx_count_substr(const char *str, const char *sub){
    int i = 0;
    int count = 0;

    if (str != NULL && sub != NULL) {
        for (i = 0; str[i] != '\0'; i++) {
            if (str[i] == sub[0]) {
                for (int j = i; ; j++) {
                    if (sub[j-i] == '\0') {
                        count++; break;
                    }
                    if (str[j] != sub[j-i]) {
                        break;
                    }
                }
            }
        }
        return count;
    }
    return -1;
}
