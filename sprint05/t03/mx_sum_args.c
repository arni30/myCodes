#include <stdbool.h>

bool mx_isdigit(int c);
bool mx_isspace(char c);
int mx_atoi(const char *str);
void mx_printchar(char c);
void mx_printint(int n);
bool isstr(char *array);

int main(int argc, char **argv){
    int num = 0;

    if(argc > 0){
        for(int i = 1; i < argc; i++){
            if(isstr(argv[i])){
                argv[i] = "0";
            }
            num += mx_atoi(argv[i]);       
        }
        mx_printint(num);
    }
    return 0;
}

bool isstr(char *array){
    int flag = 0;
    int len = 0;
    
    for(int i = 0; array[i];i++) len++;
    for(;len > 2 && !mx_isdigit(array[1]);){
        return true;
    }
    for(int i = 0; array[i];i++) {
        if( array[0] == '-' || array[0] == '+' ) {
            flag = false;
        }
        else if(!mx_isdigit(array[i])) {
            flag = true;
        }
        else {
            flag = false;
        }
   }
   return flag;
}

