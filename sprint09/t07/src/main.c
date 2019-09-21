#include "../inc/calculator.h"
#include <stdlib.h>



int main(int argc, char **argv){
    if(argc == 3){
        t_operation *operation = (t_operation*) malloc(sizeof(t_operation));
        if(*argv[2] == '+')operation->op = ADD;
        else if(*argv[2] == '-')operation->op = SUB;
        else if(*argv[2] == '*')operation->op = MUL;
        else if(*argv[2] == '/')operation->op = DIV;
        else if(*argv[2] == '%')operation->op = MOD;
        
        if(operation->op == ADD)operation->f = mx_add;
        else if(*argv[2] == SUB)operation->f = mx_sub;
        else if(*argv[2] == MUL)operation->f = mx_mul;
        else if(*argv[2] == DIV)operation->f = mx_div; 
        else if(*argv[2] == MOD)operation->f = mx_mod;
        int res = operation->f(mx_atoi(argv[1]),mx_atoi(argv[3]));    
        write(1,&res,10);
        //else write(2,INCORRECT_OPERATION,mx_strlen(INCORRECT_OPERATION));
    }
}
