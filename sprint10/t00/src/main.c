#include "read_from_file.h"

int main(int argc, char **argv){
    int flag; 
    if(argc == 2) {
        for(int i = 0; argv[1][i]; i++){
            if(argv[1][i] == '.'){
                flag = 1;
            }
        }
        if(flag == 1){
            read_from_file(argv[1]);
        }
        else{
            write(2, MX_ERROR2, mx_strlen(MX_ERROR2));
            write(2, "\n", 1);
        }
    }
    else{
        write(2, MX_ERROR, mx_strlen(MX_ERROR));
        write(2, "\n", 1);
    }
    return 0;
}
