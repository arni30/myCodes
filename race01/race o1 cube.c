void mx_printchar(char c);

void mx_cube(int n);
int main(){
    mx_cube(0);
}

void mx_cube(int n){
    int len_nklon = n/2;
    int len_horiz = n*2;
    int all_len = len_nklon + len_horiz + 3;
    if(n>1){
// Первая грань :    n/2 “ ”, “+”, 2*n “-“, “+”, “\n”
        for(int i = 0; i <= all_len; i++){
            if(i <= len_nklon){
                mx_printchar(' ');
            }
            else if(i == len_nklon + 1 || i == all_len )
            {
                mx_printchar('+');
            }
            if(i > len_nklon + 2 && i < all_len - 2){
                mx_printchar('-');
            }
                }
        mx_printchar('\n');
// Между первой и второй гранью: “ ”в цикле на -1 от (n/2 +1) до 0 ,  /,  “ ” , /, пробелы в цикле от 0 до n/2 , |. “\n”
        for(int i = 0; i < len_nklon; i++){
            for(int j = 0; j <= all_len; j++){
                if((j > 0 && j < len_nklon + 1 - i)
                    || (j > len_nklon - i && j < all_len -5 - i)
                    || (j > all_len - 2 - i &&  j < all_len))
                {
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
        // Вторая грань:  +    , 2*n  “-”   ,   ”+”   ,   n/2 “ ” , “|”, “\n”
        for(int i = 0; i <= all_len; i++){
            if(i == 0 || i == len_horiz - 1)
            {
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
// Между второй гранью и до задней грани: “|”   ,  2*n “ ”  , “|” ,  n/2 “ ” , “|” , “\n” в цикле от 0 до n - (n\2[-1])
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
// На уровне третей грани: “|”   , “ ”  длинна стороны , “|” ,  “ ” длинна грани, “+” , “\n”         
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
            if(i == 0 || i == len_horiz - 1)
            {
                mx_printchar('+');
            }
            if(i >= 1 && i < len_horiz - 1){
                mx_printchar('-');
            }
        }
        mx_printchar('\n');



// n < 1 => 0 
// n > 1

// Первая грань :    n/2 “ ”, “+”, 2*n “-“, “+”, “\n”

// Между первой и второй гранью: “ ”в цикле на -1 от (n/2 +1) до 0 ,  /,  “ ” , /, пробелы в цикле от 0 до n/2 , |. “\n”
// Вторая грань:  +    , 2*n  “-”   ,   ”+”   ,   n/2 “ ” , “|”, “\n”
// Между второй гранью и до задней грани: “|”   ,  2*n “ ”  , “|” ,  n/2 “ ” , “|” , “\n” в цикле от 0 до n - (n\2[-1])
// На уровне третей грани: “|”   , “ ”  длинна стороны , “|” ,  “ ” длинна грани, “+” , “\n” 
// Между задней гранью до третей грани: “|”   , “ ”  длинна стороны , “|” ,  “ ” длинна грани, пробелы в цикле на -1 от длинны грани до 0 , /,“\n”
// Последняя грань: “+”, длинна стороны “-“, “+”, “\n”

// Длинна стороны горизонтальная равна “+”, 2*n “-”,”+”
// Длинна стороны вертикальная равна “+”, n “|”,”+”
// Боковая грань “+”, “/” n/2, “+”




    }

}

