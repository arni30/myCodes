#include <stdbool.h>

bool mx_isdigit(int c);
bool mx_isspace(char c);
int mx_atoi(const char *str);
void mx_printint(int n);
void mx_printchar(char c);

int main(int argc, char **argv){
    int bin[32];

    for(int i = 1; i < argc; i ++){
        int j = 0;
        int num = mx_atoi(argv[i]);
        
        if (num >= 0 && num <= 2147483647){
            while(num > 0){
                bin[j] = num % 2;
                num = num / 2;
                j++;
            }
            mx_printint(0);
            for(int k = 31 - j; k > 0; k--){
                mx_printint(0);
            }

            for(int k = j - 1; k >= 0; k--){
                mx_printint(bin[k]);
            }
        }
        else if(num < 0 && num > -2147483648){
            num = num * -1;
            
            while(num > 0){
                bin[j] = num % 2;
                num = num / 2;
                j++;  
            }
            if(bin[j] == 0){
                bin[j] = 1;
            }
            else if(bin[j] == 1){
                bin[j] = 0;
            }
            mx_printint(1);
            for(int k = 31 - j; k > 0; k--){
                mx_printint(1);
            }
            for(int k = j - 1; k >= 0; k--){
                mx_printint(bin[k]);
            }
        }
        else if(num == -2147483648){
            mx_printint(1);
            for(int k = 1; k < 32; k++){
                mx_printint(0);    
            }
        }
        mx_printchar('\n');
    }
    return 0;
}


// #include <stdbool.h>

// bool mx_isspace(char c); 
// bool mx_isdigit(int c);
// int mx_atoi(const char *str);
// void mx_printchar(char c);
// void mx_printint(int n);

// int main(){
//     int s = 128;
//     int *result = 0;
//     int i = 0;
//     while (s != 0)
//     {
//         if (s % 2 == 0){
//             result[i] = 0;
//         }
//         else
//         {
//             result[i] = 1;
//         }
//         s = s >> 1;
//         i++;
//     }
        
//     for (i = i - 1; i >= 0; i--)
//     {
//        mx_printint(result[i]);
//     }
// }
