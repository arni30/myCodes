#include "../inc/pathfinder.h"

void mx_find_errors(int argc, char **argv) {
    mx_error_usage(argc);
    const char *file = argv[1];
    mx_file_errors(file);
    char *temp = mx_file_to_str(file);
    char **str = mx_strsplit(temp, '\n');

    if (str != NULL) {
        mx_first_line_valid(str);
        mx_line_valid(str, temp);
        mx_del_strarr(&str);
    }
    free(temp);
}

