#include "../inc/pathfinder.h" 


int *mx_arr_skip_first_string(char **unique, char **res){    
    int count_unique = mx_count_arr_el(unique);
    int counter = mx_count_arr_el(res);
    int *new_res = (int*)malloc((counter - 1) * sizeof(int));//не считаем кол-во элементов
    int i = 0;
    int j = 1;
    
    while (i < count_unique){   
        j = 1;
        while (j < counter){
            if(mx_strcmp(res[j], unique[i]) == 0){
                new_res[j-1] = i;
            }
            else if(mx_atoi(res[j])){
                new_res[j-1] = mx_atoi(res[j]);
            }
            j++;
    }
    i++;
    }
    return new_res;
}
