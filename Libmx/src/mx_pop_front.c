#include "../inc/libmx.h"

void mx_pop_front(t_list **head){
    t_list *temp = *head;
    
    if (head == NULL)
        return;
    if(*head == NULL)
        return;
    *head = temp->next;
    free(temp);
}
