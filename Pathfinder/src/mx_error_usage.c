#include "../inc/pathfinder.h"

void mx_error_usage(int argc) {
    if (argc != 2) {
        char *error = "usage: ./pathfinder [filename]\n";

        write(2, error, mx_strlen(error));
        exit(1);
    }  
}
