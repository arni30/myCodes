#include "../inc/libmx.h"

t_list  *mx_create_node(void *data){
    t_list *first = NULL;
    first = malloc(sizeof(t_list));
    if(first != NULL){
        first->data = data;
        first->next = NULL;
        return first;
    } 
    return 0;  
}
