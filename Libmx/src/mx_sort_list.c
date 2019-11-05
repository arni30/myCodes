#include "../inc/libmx.h"

t_list *mx_sort_list(t_list *lst, bool (*cmp)(void *, void *)){
    t_list *current_node = lst;

    while(current_node != NULL){
        while(current_node->next != NULL){
            if (cmp(current_node->data, current_node->next->data) == 1) {
                t_list *temp = current_node;
                current_node = current_node->next;
                current_node->next = temp;
            }
            current_node->next = current_node->next->next;
        }    
        current_node = current_node->next;   
    }
    return lst;
}
