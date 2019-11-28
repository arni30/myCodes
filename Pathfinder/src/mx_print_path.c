#include "../inc/pathfinder.h"

void mx_print_path(char **unique, int start, int end) {
    mx_printstr("========================================\n");
    mx_printstr("Path: ");
    mx_printstr(unique[start]);
    mx_printstr(" -> ");
    mx_printstr(unique[end]);
    mx_printchar('\n');
}
