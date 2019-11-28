#include "../inc/pathfinder.h"

int mx_loop_for_line_valid(int count, char **str){
    int flag = 0;
    for(int i = 0; i < mx_strlen(str[count]); i++){
        if (mx_isalpha(str[count][i]) && (flag == 0 || flag == 1)) continue;
        if (str[count][i] == '-' && flag == 0 && i != 0) {
            flag += 1;
            continue;
        }
        if (str[count][i] == ',' && flag == 1 && mx_isdigit(str[count][i+1]) 
            && (mx_get_char_index(str[count], ',') - mx_get_char_index(str[count], '-') > 1)) {
            flag *= -2;
            continue;
        }
        if (mx_isdigit(str[count][i]) && flag == -2) continue;
        else {
            mx_del_strarr(&str);
            mx_print_error_line(count);
        }
    }
    count++;
    return count;
}
