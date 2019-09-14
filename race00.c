int mx_strlen(const char *s);
void race00(int map_length, int map_width, int one_y, int one_x);
void mx_printstr(const char *s);
void mx_printchar(char c);

void race00(int map_length, int map_width, int one_y, int one_x){
    char map[map_length+2][map_width+2];
    
    if (one_y <= map_length && one_x <= map_width)
    {
        for(int i = 0; i < map_length + 2; i++){
            for (int j = 0; j < map_width + 2; j++){ 
                if((i == 0 && j == 0) 
                || (i == map_length + 1 && j == 0))
                {
                    map[i][j] = '<';
                }
                else if((i == 0 && j == map_width + 1) 
                        || (i == map_length + 1 && j == map_width + 1))
                {
                    map[i][j] = '>';
                }
                else if(i == one_y + 1  && j == one_x + 1) {
                    map[i][j] = '1';
                }
                else if((i == 0 && j == map_width) || (i == 0 && j == 1) 
                        || (i == map_length + 1 && j == 1) 
                        || (i == map_length + 1 && j == map_width)) 
                {
                    map[i][j] = '=';
                }
                else if((i == 0 && j != 0 && j !=1 && j != map_width + 1 && j != map_width) 
                        || (i == map_length+1 && j != 0 && j !=1 
                        && j != map_width + 1 && j != map_width)) 
                {
                    map[i][j] = '-';
                }
                else if((j == 0 && i != 0 && i != map_length + 1 && i % 2 !=0)  ||
                        (j == map_width + 1 && i != 0 
                        && i != map_length + 1 && i % 2 !=0)) 
                {
                    map[i][j] = '*';
                } 
                else if((j == 0 && i != 0 && i != map_length + 1 && i % 2 == 0)  
                        || (j == map_width + 1 && i != 0 
                        && i != map_length + 1 && i % 2 == 0))
                {
                    map[i][j] = '+';
                }
                else
                {
                    map[i][j] = '0';
                }
            }
        }
        for(int i = 0; i < map_length + 2; i++){
            for (int j = 0; j < map_width + 2; j++){ 
                mx_printchar(map[i][j]);
            }
            mx_printchar('\n');
        }
    }
}


