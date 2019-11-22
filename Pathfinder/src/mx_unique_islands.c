#include "../inc/pathfinder.h"

char **mx_unique_islands(char **str){
    int count = 0;
    char **arr = (char **)malloc(mx_atoi(str[0]) * sizeof(char*));
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
    int j = 0;
    for(int i = count - 1; i > 0; i--){
        flag = 0;
        if(mx_atoi(str[i]) != 0) continue;
        for(j = i - 1; j > 0; j--){
            if(mx_atoi(str[j]) != 0) continue;
            if(mx_strcmp(str[i], str[j]) == 0) flag = 1;
        }
        if(flag == 0){
            //arr[counter] = malloc(sizeof(char) * mx_strlen(str[i]));
            arr[counter] = str[i];
            counter++;
        }
    }
    if (counter != mx_atoi(str[0])) {
        write(2, "error: invalid number of islands", mx_strlen("error: invalid number of islands"));
        exit(1);
    }
    for(int i = counter - 1, j = 0; i > (counter - 1) / 2; i--, j++){
        char *temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    arr[counter] = NULL;
    return arr;
}
