#include <stdbool.h>

bool mx_isupper(int c);
bool mx_islower(int c);
int mx_tolower(int c);
int mx_toupper(int c);
void mx_reverse_case(char *s);

void mx_reverse_case(char *s){
    int length = 0;
    char change;

    while (s[length]){
        if(mx_islower(s[length]) ==  1){
            change = s[length];
            s[length] = mx_toupper(change);
            mx_toupper(s[length]);
        }
        else if (mx_isupper(s[length]) == 1){
            change = s[length];
            s[length] = mx_tolower(change);
        }
        length++;
    }
}
