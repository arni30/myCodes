#include "mx_printchar.c"

void mx_printchar(char c);
void mx_pyramid(int n);

int main(){
    mx_pyramid(6);
}

void mx_pyramid(int n){
    int len_horiz = 2 * n - 3;
    int len_vertical = n / 2;
    int len_fr_left = n;

    for(int i = 0; i <= len_fr_left + 1; i++){
        if(i >= 0 && i < len_fr_left - 1){
            mx_printchar('*');
        }
        if(i == len_fr_left){
            mx_printchar('/');
        }
        if(i == len_fr_left + 1){
            mx_printchar('\\');
        }
    }
    mx_printchar('\n');

    for(int i = 0; i < len_vertical - 1; i++){
        for(int j = 0; j < len_horiz + 3; j++){
            if((j >= 0 && j < len_fr_left - 2 - i) 
            || (j > len_fr_left - 2 - (i-1) && j < len_fr_left + 1 +(i-1)) 
            || (j > len_fr_left +1 - i && j < len_fr_left +3 + i) || j == n){
                mx_printchar('*');
            }
            if(j == len_fr_left - 2 - i){
            mx_printchar('/');
            }
            if (j == len_fr_left + i || j == len_fr_left + 3 + i){
                mx_printchar('\\');
            }
        }
        mx_printchar('\n');
    }
    for(int i = 0; i < len_vertical; i++){
        for(int j = 0; j < len_horiz + 3; j++){

            if(i == len_vertical - 1 &&(j > 0 && j < n+1))
            {
                mx_printchar('_');
            }
            else{
            if((j >= 0 && j < len_fr_left - 4 - i)
                || (j > len_fr_left - 3 - (i-1) && j < len_fr_left + 4 + i )
                || (j > len_fr_left +3 + i && j < len_fr_left +7 + i)){
            
                 mx_printchar('*');
         
            
                }
            
            if(j == len_fr_left - 4 - i){
            mx_printchar('/');
            }
            if (j == len_fr_left + 3 + i){
                mx_printchar('\\');
            }
            if (j == 2*n - 1){
                mx_printchar('|');
            }
            if(i == len_vertical - 1 && (j > 0 && j < 2*n))
            {
                mx_printchar('_');
            }
            
        }
        mx_printchar('\n');
}


    
}

