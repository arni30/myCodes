#include <stdbool.h>

bool mx_isdigit(int c);
bool mx_isspace(char c);
int mx_atoi(const char *str);

int mx_atoi(const char *str) {
    int sign = 0;
    int count = 0;
    int result = 0;
    int end = 0;
    while(mx_isspace(str[count])){
        count++;
    }
    if(*(str + count) == '-'){
        sign = -1;
        end = 1;
        count++;
    }
    else if (*(str + count) == '+'){
        sign = 1;
        end = 1;
        count++;
    }
    else if (mx_isdigit(*(str + count))){
        sign = 1;
        end = 0;
    }
    while(*str){
        if(!mx_isdigit(str[count])){
            break;
        }
        result = result * 10 + (str[count] - '0');
        count++;
    }
    return result * sign;
}
