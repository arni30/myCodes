#include "../inc/pathfinder.h"

void mx_dejkstry_algorithm(unsigned long **matrix_distances, int num_of_islands, int *s, int *c, unsigned long *b){  
    //тут будет начинаться общий цыкл
    //инициализация:
    //массив расстояний от текущей вершины к остальным
    int *c_extra = malloc(num_of_islands * sizeof(int));
    for(int l = 0; l < num_of_islands - 1; l++){    
        for(int i = l; i < num_of_islands; i++){
            s[i] = 0;
            c_extra[i] = -1;
            c[i] = l; //рассматривемую вершину
            b[i] = matrix_distances[l][i];
        }
        c[l] = -1;//путь до самой себя, в алгоритме помечена как 0, но у нас существует такой индекс
        s[l] = 1; //рассматриваемая вершина, заменить на итератор, помечаем рассматриваемую вершину
        //общий шаг:
        int *temp = malloc(sizeof(int)* num_of_islands);//массив для поиска минимальных расстояний
        // unsigned long *b_extra = malloc(num_of_islands * sizeof(unsigned long));
        // int *c_extra = malloc(num_of_islands * sizeof(int));
        for(int k = 0; k < num_of_islands; k++){
            for(int i = 0; i < num_of_islands; i++){
                if(s[i] != 0 ) temp[i] = 2147483647;
                else temp[i] = b[i];
            }
            int min = mx_min(temp, num_of_islands);
            s[min] = 1;
            for(int j = 0; j < num_of_islands; j++){
                //if(s[j] == 0){
                    if(b[j] > b[min] + matrix_distances[min][j]){
                        b[j] = b[min] + matrix_distances[min][j];
                        c[j] = min;
                    } 
                    if(b[j] == b[min] + matrix_distances[min][j]){
                        c_extra[j] = min;
                    }
                //}
            }
        }
        free(temp);
        int k = 0;
        while (k < num_of_islands){
            //printf("c_e = %d\n",c_extra[k]);
            printf("b = %lu\n",b[k]);
            k++;
        }
        mx_printchar('\n');
    }

    
    free(s);
    free(b);
    free(c);
}
