#include "../inc/pathfinder.h"

void find_errors(int argc, char **argv);
char **separate_string(char *str);
char **mx_unique_islands(char **str);
bool mx_isalpha(int c);

int main(int argc, char **argv)
{  
    find_errors(argc, argv);
    char *file = argv[1];
    char *str = mx_file_to_str(file);//файл в строку
    char **res = separate_string(str);//массив строк(каждый остров и расстояние отдельный элемент)
    
    
    //int num_islands = mx_atoi(res[0]);
    int counter = 0;
    // while (res[counter])
    // {
    //     counter++;
    // }  
    char **unique = mx_unique_islands(res);

    while (unique[counter])
    {
        printf("%s", unique[counter]);
        counter++;
    }
    
    // int new_res[12];
    // int i = 0;
    // int j = 1;
    // while (unique[i])
    // {   
    //     j = 1;
    //     while (res[j]){
    //         if(mx_strcmp(res[j], unique[i]) == 0){
    //             new_res[j-1] = i;
    //         }
    //         // else if(mx_isdigit(*res[j])){
    //         //     new_res[j-1] = mx_atoi(res[j]);
    //         // }
    //         j++;
    //     }
    //     i++;
    // }
    // j = 0;
    // while (j<12)
    // {
    //     printf("%d ", new_res[j]);
    //     j++;
    // }
    
    system("leaks -q pathfinder");
    return 0;
}

char **separate_string(char *str){
    char *temp = mx_replace_substr(str, "-", " ");
    char *str_new = mx_replace_substr(temp, ",", " ");
    char *matrix = mx_replace_substr(str_new, "\n", " ");
    char **res = mx_strsplit(matrix, ' ');
    free(str);
    free(temp);
    free(str_new);
    free(matrix);
    return res;
}

void find_errors(int argc, char **argv){
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

char **mx_unique_islands(char **str){
    int count = 0;
    char **arr = malloc(sizeof(char));
    while (str[count]){
        count++;
    }
    for(int i = 1; i < count; i += 3){
        if(mx_strcmp(str[i], str[i+1]) == 0 && mx_atoi(str[i+2]) != 0){
            exit(1);
        }
    }
    int counter = 0;
    int flag = 0;
    for(int i = 1; i < count - 1; i++){
        flag = 0;
        if(mx_atoi(str[i]) != 0) continue;
        for(int j = i+1; j < count; j++){
            if(mx_atoi(str[j]) != 0) continue;
            if(mx_strcmp(str[i], str[j]) == 0) flag = 1;
        }
        if(flag == 0){
            arr[counter] = str[i];
            counter++;
        }
    }
    if (counter != mx_atoi(str[0])) {
        write(2, "error: invalid number of islands", mx_strlen("error: invalid number of islands"));
        exit(1);
    }
    arr[counter] = NULL;
    return arr;
}

bool mx_isalpha(int c){
    if((c >= 65 && c <= 90) || (c >= 97 && c <= 122)){
      return 1;
    }
    else{
      return 0;
    }
}


