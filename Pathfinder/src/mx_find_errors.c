#include "../inc/pathfinder.h"

void mx_find_errors(int argc, char **argv){
    if(argc != 2){
        write(2, "usage: ./pathfinder [filename]", mx_strlen("usage: ./pathfinder [filename]"));
        exit(1);
    }
    const char *file = argv[1];
    int file_open = open(file, 'r'), buf_size = 64, size = 0;
    if(file_open < 0){
        write(2, "error: file ", mx_strlen("error: file "));
        write(2, file, mx_strlen(file));
        write(2, " doesn't exist", mx_strlen(" doesn't exist"));
        exit(1); 
    }
    char buf[buf_size]; 
    if((size = read(file_open, &buf, buf_size)) == 0){
        close(file_open);
        write(2, "error: file ", mx_strlen("error: file "));
        write(2, file, mx_strlen(file));
        write(2, " is empty", mx_strlen(" is empty"));
        exit(1); 
    }
    close(file_open);
    char *temp = mx_file_to_str(file);
    char **str = mx_strsplit(temp, '\n');
    free(temp);
    if(str != NULL){
        if(mx_atoi(str[0]) == 0){
            write(2, "error: line 1 isn't valid", mx_strlen("error: line 1 isn't valid "));
            exit(1);
        }
        int count = 1;
        int flag = 0;
        while(str[count]){
            flag = 0;
            for(int i = 0; i < mx_strlen(str[count]); i++){
                if(mx_isalpha(str[count][i]) && (flag == 0 || flag == 1)) continue;
                if(str[count][i] == '-' && flag == 0 && i != 0){
                    flag += 1;
                    continue;
                }
                if(str[count][i] == ',' && flag == 1 
                    && mx_isdigit(str[count][i+1]) 
                    && (mx_get_char_index(str[count], ',') - mx_get_char_index(str[count], '-') > 1)){
                    flag *= -2;
                    continue;
                }
                if(mx_isdigit(str[count][i]) && flag == -2) continue;
                else{
                    mx_del_strarr(&str);
                    write(2, "error: line ", mx_strlen("error: line "));
                    write(2, mx_itoa(count + 1), mx_strlen(mx_itoa(count + 1)));
                    write(2, " isn't valid", mx_strlen(" isn't valid"));
                    exit(1);
                }
            }
            count++;
        }
        mx_del_strarr(&str);
    }
}
