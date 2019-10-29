#include "libmx.h"

void mx_push_back(t_list **list, void *data){
    t_list *current_node = *list;

    while(current_node->next != NULL){
        current_node = current_node->next;    
    }  
    current_node->next = mx_create_node(data);
}
