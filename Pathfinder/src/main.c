#include "../inc/pathfinder.h"

void find_errors(int argc, char **argv);
char **separate_string(char *str);
char **mx_unique_islands(char **str);
bool mx_isalpha(int c);
int **matrix_dst(char **unique, char **res);

int main(int argc, char **argv){  
    find_errors(argc, argv);
    char *file = argv[1];
    char *str = mx_file_to_str(file);//файл в строку
    char **res = separate_string(str);//массив строк(каждый остров и расстояние отдельный элемент)
    //int num_islands = mx_atoi(res[0]);
    
    char **unique = mx_unique_islands(res);
    int **matrix_distance = matrix_dst(unique, res);
    matrix_distance++;
    // for(int i = 0; i < 4; i++){
    //     for(int j = 0; j < 4; j++){
    //         printf("%10d ", matrix_distance[i][j]);
    //     }
    //     printf("\n\n");
    // }
    //system("leaks -q pathfinder");
    return 0;
}

int **matrix_dst(char **unique, char **res){
    int count_unique = 0;
    while (unique[count_unique]){
        //printf("%s\n", unique[count_unique]);
        count_unique++;
    }
    int counter = 0;
    while (res[counter]){
        counter++;
    }   
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
    int lines = (counter - 1) / 3;
    int columns = 3;
    int **matrix_distance = (int**)malloc(lines * sizeof(int*));
    int k = 0;
    for(i = 0; i < lines; i++){
        matrix_distance[i] = (int*)malloc(columns * sizeof(int));
        for(j = 0; j < columns; j++){
            matrix_distance[i][j] = new_res[k];
            k++;
        }
    }
    free(new_res);

    int **new_matrix_distance = (int**)malloc(count_unique * sizeof(int*));
    for(i = 0; i < count_unique; i++){
        new_matrix_distance[i] = (int*)malloc(count_unique * sizeof(int));
        for(j = 0; j < count_unique; j++){
            new_matrix_distance[i][j] = 0;
        }
    }
    for(i = 0; i < lines; i++){
        new_matrix_distance[matrix_distance[i][0]][matrix_distance[i][1]] = matrix_distance[i][2];
        new_matrix_distance[matrix_distance[i][1]][matrix_distance[i][0]] = matrix_distance[i][2];
    }
    for(i = 0; i < lines; i++){
        free(matrix_distance[i]);
    }
    free(matrix_distance);
    bool in_tree[count_unique];
    int dist[count_unique];
    int parent[count_unique];
    for(int i = 0; i < count_unique; i++) dist[i] = 2147483647; // машинная бесконечность,
      // т. е. любое расстояние будет меньше данного

    dist[0] = 0; // понятно почему, не так ли? ;)

    int cur = 0; // вершина, с которой работаем

   // пока есть необработанная вершина
    while(!in_tree[cur])
    {
        in_tree[cur] = true;

        for(int i = 0; i < count_unique; i++)
        {
         // если между cur и i есть ребро
        if(new_matrix_distance[cur][i] > 0){
            // считаем расстояние до вершины i:
            // расстояние до cur + вес ребра
            int d = dist[cur] + new_matrix_distance[cur][i];
            // если оно меньше, чем уже записанное
            if(d < dist[i]){
               dist[i]   = d;   // обновляем его
               parent[i] = cur; // и "родителя"
            }
         }
      }

      // ищем нерассмотренную вершину
      // с минимальным расстоянием
      int min_dist = 2147483647;
      for(int i = 0; i < count_unique; i++){
        if(!in_tree[i] && dist[i] < min_dist){
            cur = i;
            min_dist = dist[i];
        }
    }
}
    int d = 0;
    while (d<5){
       printf("%d\n", parent[d]);
       d++;
    }
   
    // int *s = malloc(count_unique * sizeof(int));
    // for(int i = 0; i < count_unique; i++){
    //     s[i] = 0;
    // }
    // int *b = malloc(count_unique * sizeof(int));
    // for(int i = 0; i < count_unique; i++){
    //     b[i] = new_matrix_distance[0][i];
    //     if(b[i] == 0){
    //         b[i] = 2147483647;
    //     }
    //     //printf("%d ", b[i]);
    // }
    // int *c = malloc(count_unique * sizeof(int));
    // for(int i = 0; i < count_unique; i++){
    //     c[i] = 0; // 0 заменить на рассматривемую вершину
    // }
    // s[0] = 1; //рассматриваемая вершина, заменить на итератор
    // int *temp = malloc(sizeof(int)* count_unique);
    // for(int k = 0; k < count_unique; k++){
    //     if(s[k] == 0){
    //         for(int i = 0; i < count_unique; i++){
    //             if(s[i] == 1) temp[i] = 2147483647;
    //             else temp[i] = b[i];
    //         }
    //         int min = mx_min(temp, count_unique);
    //         //printf("%d\n",min);
    //         if(b[min] <= b[k]){
    //             s[min] = 1;
    //             if(b[k] > b[min] + new_matrix_distance[min][k]){
    //                 b[k] = b[min] + new_matrix_distance[min][k];
    //                 c[k] = min;
    //             }
    //         }
    //     }
        
    // }
    // k = 0;
    // while (k<5)
    // {
    //     printf("%d\n", s[k]);
    //     k++;
    // }
    
        
    return new_matrix_distance;
}





char **separate_string(char *str){
    char *temp = mx_replace_substr(str, "-", " ");
    char *str_new = mx_replace_substr(temp, ",", " ");
    char *matrix = mx_replace_substr(str_new, "\n", " ");
    char **res = mx_strsplit(matrix, ' ');
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

bool mx_isalpha(int c){
    if((c >= 65 && c <= 90) || (c >= 97 && c <= 122)){
      return 1;
    }
    else{
      return 0;
    }
}


