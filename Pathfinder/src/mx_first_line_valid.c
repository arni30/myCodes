#include "../inc/pathfinder.h"

void mx_first_line_valid(char **str) {
    if (mx_atoi(str[0]) == 0) {
        write(2, "error: line 1 is not valid", mx_strlen("error: line 1 is not valid"));
        exit(1);
    }    
}
