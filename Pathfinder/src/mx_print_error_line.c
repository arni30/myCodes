#include "../inc/pathfinder.h"

void mx_print_error_line(int count) {
    write(2, "error: line ", mx_strlen("error: line "));
    write(2, mx_itoa(count + 1), mx_strlen(mx_itoa(count + 1)));
    write(2, " is not valid", mx_strlen(" is not valid"));
    exit(1);
}
