#include "../inc/pathfinder.h"

void mx_print_route(char **unique, int *route, int i){
    for (int h = i - 1; h >= 0; h--) {
        mx_printstr(" -> ");
        mx_printstr(unique[route[h]]);
    }
    mx_printchar('\n');
}
