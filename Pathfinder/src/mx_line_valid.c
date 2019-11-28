#include "../inc/pathfinder.h"

void mx_line_valid(char **str) {
    int count = 1;

    while(str[count]) {
        count = mx_loop_for_line_valid(count, str);
    }    
}
