#include <unistd.h>

void mx_matrix_voice(void);

void mx_matrix_voice(){
    char *sound = "\a";
    write(1, sound, 1);
}
