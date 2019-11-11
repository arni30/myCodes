#include "../inc/libmx.h"

void mx_pop_back(t_list **head){
    t_list *current_node = *head;
    t_list *previous_node;
    t_list *temp_ptr;
    if (head == NULL)
        return;
    if(*head == NULL)
        return;
    while(current_node->next != NULL){
        previous_node = current_node;
        current_node = current_node->next;    
    }  
    temp_ptr = current_node;
    previous_node->next = current_node->next;
    free(temp_ptr);
}
