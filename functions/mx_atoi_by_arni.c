#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "header.h"


int main(){
    printf("%d\n",mx_atoi("231313123000"));
    printf("%d",atoi("231313123000"));
}

int mx_atoi(const char *str) {
    int sign = 0;
    int count = 0;
    int result = 0;
    int divide = 1;
    int end = 0;
    int start;

    if(*str == '-'){
        sign = -1;
        end = 1;
        count ++;
    }
    else if (*str == '+'){
        sign = 1;
        end = 1;
        count++;
    }
    else if (mx_isdigit(*str)){
        sign = 1;
        end = 0;
    }
    else
    {
        sign = 0;
    }

    while(str[count] != '\0' && mx_isdigit(str[count])){
        count++;
    }
    start = count -1;
    
    if (mx_isspace(*str)){
        return 0;
    }

    for(int i = start; i >= end; i--){
        result += (str[i] - '0') * divide;
        divide *= 10;
    }
    return result * sign;
}




    




    

    




































//     for(int i = 0; str[i]; i++){
//         if(mx_isspace(str[i])){
//             count++;
//         }
//         else if(! mx_isspace(str[i])){
//             break;
//         }
//     }
//     printf("SIGN = %d",count);
//     if (str[count] == '-'){
//         sign = -1;
//     }
//     else if (str[count] <= '9' && str[count] >= '0'){

//         sign = 1;
//     }
//     return 0;
// }

    
// //     for(int i = count; mx_isdigit(str[i]); i++){
// //         final *= 10;
// //         value += (str[i] - '0');
// //         str++;
// //     }
// //     return value * sign;
// // }
