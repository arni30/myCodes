#include "../inc/libmx.h"

void mx_push_back(t_list **list, void *data){
    while (*list){
        list = &(*list)->next;
    }
    *list = malloc(sizeof(**list));
    (*list)->data = data;
    (*list)->next = NULL;
}
