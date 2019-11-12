#include "../inc/pathfinder.h"

int main()
{
    char *str = mx_file_to_str("example1");
    char **res = mx_strsplit(str , '\n');
    mx_strsplit(res[1], '-');
    printf("%s", res[1]);
    return 0;
}
