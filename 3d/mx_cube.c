void mx_printchar(char c);
void mx_cube(int n);

void mx_cube(int n){
    int len_nklon = n/2;
    int len_horiz = n*2;
    int all_len = len_nklon + len_horiz + 3;
    
    if(n>1){
        for(int i = 0; i <= all_len; i++){
            if(i <= len_nklon){
                mx_printchar(' ');
            }
            if(i == len_nklon + 1 || i == all_len ){
                mx_printchar('+');
            }
            if(i > len_nklon + 2 && i < all_len - 2){
                mx_printchar('-');
            }
        }
        mx_printchar('\n');
        for(int i = 0; i < len_nklon; i++){
            for(int j = 0; j <= all_len; j++){
                if((j > 0 && j < len_nklon + 1 - i)
                    || (j > len_nklon - i && j < all_len -5 - i)
                    || (j > all_len - 2 - i &&  j < all_len)){
                    mx_printchar(' ');
                }
                if(j == len_nklon - i || j == all_len - 1 - i){
                    mx_printchar('/');
                }
                if(j == all_len){
                    mx_printchar('|');
                }
            }
            mx_printchar('\n');
        }
        for(int i = 0; i <= all_len; i++){
            if(i == 0 || i == len_horiz - 1){
                mx_printchar('+');
            }
            if(i >= 1 && i < len_horiz - 1){
                mx_printchar('-');
            }
            if(i > len_horiz - 1 && i < all_len - 3){
            mx_printchar(' ');
            }
            if(i == all_len){
                mx_printchar('|');
            }
        }
        mx_printchar('\n');
        for(int i = 0; i < len_nklon; i++){
            for(int j = 0; j <= all_len; j++){
                if(i != len_nklon - 1){
                    if (j == 0 || j == len_horiz - 1 || j == all_len){
                        mx_printchar('|');
                    }
                }
                else{
                    if (j == 0 || j == len_horiz - 1){
                        mx_printchar('|');
                    }
                    if(j == all_len - 3){
                        mx_printchar('+');
                    }
                }
                if((j >= 1 && j < len_horiz - 1) || (j > len_horiz - 1 && j < all_len - 3)){
                    mx_printchar(' ');
                }
            }
            mx_printchar('\n');
        }      
        for(int i = 0; i < len_nklon; i++){
            for(int j = 0; j <= all_len; j++){
                if((j >= 1 && j < len_horiz - 1)
                    || (j < all_len - 4 - i &&  j > len_horiz - 1)){
                    mx_printchar(' ');
                }
                if(j == all_len - 1 - i){
                    mx_printchar('/');
                }
                if (j == 0 || j == len_horiz - 1){
                    mx_printchar('|');
                }
            }
            mx_printchar('\n');
        }
        
        for(int i = 0; i <= all_len; i++){
            if(i == 0 || i == len_horiz - 1){
                mx_printchar('+');
            }
            if(i >= 1 && i < len_horiz - 1){
                mx_printchar('-');
            }
        }
        mx_printchar('\n');
    }
}

