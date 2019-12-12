#include "../inc/pathfinder.h"

void mx_first_line_valid(char **str) {
    for (int i = 0; i < mx_strlen(str[0]); i++) {
        if (!mx_isdigit(str[0][i])) {
            char *error = "error: line 1 is not valid\n";
            write(2, error, mx_strlen(error));
            exit(1);
        }
    }    
}
