void mx_printchar(char c);
int mx_strlen(const char *s);
void mx_printstr(const char *s);
char *mx_strchr(const char *s, int c);

int main(int argc, char **argv){
    char delim = '/';
    
    if(argc == 0){
        return 0;
    }
    char *str = *argv;
    char *find_the_delim = mx_strchr(str, delim);
    for(; find_the_delim;){
        str = find_the_delim + 1;
        find_the_delim = mx_strchr(str, delim);
    }
    mx_printstr(str);
    mx_printchar('\n');
    return 0;
}
