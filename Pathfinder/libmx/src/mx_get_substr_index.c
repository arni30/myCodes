#include "../inc/libmx.h"

int mx_get_substr_index(const char *str, const char *sub){
    int flag = 0;
    int index = 0;
    if (str != NULL && sub != NULL) {
        for (int i = 0;str[i] != '\0'; i++) {
            if (str[i] == sub[0]) {
                for (int j = i; ; j++) {
                    if (sub[j-i] == '\0') {
                        flag = 1;
                        index = i;
                        break;
                    }
                    if (str[j] != sub[j-i]) {
                        break;
                    }
                }
            }
            if (flag == 1) {
                break;
            }
        }
        if (flag == 1) {
            return index;
        }
        else {
            return -1;
        }
    }
    return -2;
}
