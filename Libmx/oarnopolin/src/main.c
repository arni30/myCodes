#include "libmx.h"

int main(){
    t_list *list = NULL;
    list->data = "1";
    list->next->data = "2";
    list->next->next->data = "3";
    mx_push_back(&list,"12231");
}
