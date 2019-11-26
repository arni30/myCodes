#include "../inc/pathfinder.h"

void mx_output(int l, char **unique, int num_of_islands, int *c, unsigned long *b, int *c_extra){
    int count_path = 0;
    //int start = l;
    for(int i = l; i < num_of_islands; i++){
        if(c[i] != -1) count_path++;
    }
    for(int i = l; i < num_of_islands; i++){
        if(c_extra[i] != -1){
            if(c_extra[i] != c[i]){
                if(c_extra[c[i]] != c[c[i]] && c_extra[c[i]] != -1) count_path++;
                if(c_extra[c_extra[i]] != c[c_extra[i]] && c_extra[c_extra[i]] != -1) count_path++;
                count_path++;
            }
            else if(c_extra[c[i]] != c[c[i]] && c_extra[c[i]] != -1) count_path++;
        }
    }
    int k = l + 1; 
    b++;
    unique++;
    //int end = k;
    int *route = malloc(100*sizeof(int*));
    route[0] = k;
    int i = 1;
    while(c[k] != l){
        route[i] = c[k];
        k = c[k];
        printf("%d",route[i]);
        i++;
    }
    
    // b++;
    // for(int i = 0; i < count_path; i++){
    //     mx_printstr("========================================\n");
    //     mx_printstr("Path: ");
    //     mx_printstr(unique[l]);
    //     mx_printstr(" -> ");
    //     mx_printchar('\n');
    //     mx_printstr("========================================\n");
    // }
}
