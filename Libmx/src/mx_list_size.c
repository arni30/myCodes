#include "../inc/libmx.h"

int mx_list_size(t_list *list){
    t_list *current_node = list;
    int count = 0;

    while(current_node != NULL){
        current_node = current_node->next;
        count++;
    }
    return count;  
}
