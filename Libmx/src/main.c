#include "../inc/libmx.h"
int main() {
    mx_file_to_str("libmx.txt");
    system("leaks -q main");
   return 0;
}
