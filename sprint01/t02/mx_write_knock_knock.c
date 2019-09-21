#include <string.h>
#include <unistd.h>

void mx_write_knock_knock(void);

void mx_write_knock_knock(void){
    char *string = "Follow the white rabbit.\nKnock, knock, Neo.\n";
    write(1, string, strlen(string));
}
