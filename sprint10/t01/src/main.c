#include "mx_cp.h"
#include <fcntl.h>

int main(int argc, char **argv){ 
    if(argc == 3) {
        if(open(argv[1], O_RDONLY, 0) == -1){
            for(int i = 0; mx_strchr(argv[0],'/'); i++) {
                argv[0] = mx_strchr(argv[0],'/');
                argv[0]++;
            }
            write(2, argv[0], mx_strlen(argv[0]));
            write(2,": ", 2);
            write(2, argv[1], mx_strlen(argv[1]));
            write(2,": ", 2);
            write(2, strerror (2), mx_strlen(strerror (2)));
            write(2,"\n", 2);   
            exit(1);  
        }
        copy_from_file(argv[1],argv[2]);
    }
    else{
        write(2, MX_ERROR, mx_strlen(MX_ERROR));
        write(2, "\n", 1);
    }
    return 0;
}
