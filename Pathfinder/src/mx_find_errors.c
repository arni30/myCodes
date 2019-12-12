#include "../inc/pathfinder.h"

void mx_find_errors(int argc, char **argv) {
    const char *file = argv[1];
    char *temp = mx_file_to_str(file);
    char **str = mx_strsplit(temp, '\n');
    
    mx_error_usage(argc);
    mx_file_errors(file);
    if(mx_get_char_index(temp, '\n') == -1 
        || (mx_get_char_index(temp, '\n') == 0 
        && mx_get_char_index(temp, '-') == -1))
    {
        free(temp);
        exit(1);
    }
    if (str != NULL) {
        mx_first_line_valid(str);
        mx_line_valid(str, temp);
        mx_del_strarr(&str);
    }
    free(temp);
}

