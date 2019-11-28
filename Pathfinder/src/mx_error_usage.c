#include "../inc/pathfinder.h"

void mx_error_usage(int argc) {
    if (argc != 2) {
        write(2, "usage: ./pathfinder [filename]", mx_strlen("usage: ./pathfinder [filename]"));
        exit(1);
    }  
}
