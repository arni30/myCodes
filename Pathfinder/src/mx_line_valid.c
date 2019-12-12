#include "../inc/pathfinder.h"

void mx_line_valid(char **str, char *file) {
    int count = 1;
    int i = 0;
    int line = 1;

    while (file[i]){
        if(!mx_isdigit(file[0])){
            mx_del_strarr(&str);
            mx_print_error_line(0);
        }
        if (file[i] == '\n' && mx_isalpha(file[i+1])) line++;
        if ((file[i] == '\n' && !mx_isalpha(file[i+1]) && file[i+1] != '\0')
            || (mx_isdigit(file[i]) && file[i+1] == '\0')) 
        {
            mx_del_strarr(&str);
            mx_print_error_line(line);
        }
        i++;
    }
    while(str[count]) {
        count = mx_loop_for_line_valid(count, str);
    }    
}
