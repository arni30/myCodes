#include <stdbool.h>

bool mx_isdigit(int c);
bool mx_isspace(char c);
int mx_atoi(const char *str);
void mx_printchar(char c);
void mx_printint(int n);
int mx_strlen(const char *s);

int main(int argc, char **argv){
    int arg_one = 0;
    int arg_two = 0;
     
    if(mx_atoi( argv[2]) > 0 &&  mx_atoi( argv[1]) > 0 && mx_atoi( argv[2]) <= 9  &&  mx_atoi( argv[1]) <= 9 ) {
        
    if (argc == 3){
        if(mx_atoi( argv[1]) > mx_atoi( argv[2])){
            arg_one = mx_atoi( argv[1]);
            arg_two = mx_atoi( argv[2]);
        }
        else if(mx_atoi( argv[2]) >= mx_atoi( argv[1])) {
            arg_one = mx_atoi( argv[2]);
            arg_two = mx_atoi( argv[1]);
        }
        for(int i = arg_two; i <= arg_one; i++){
            for(int j = arg_two; j <= arg_one; j++){
                int type = i * j;
                mx_printint(type);
                if(j < arg_one) mx_printchar('\t');
        }
        mx_printchar('\n');
        }
    }
    }
    return 0;
}
