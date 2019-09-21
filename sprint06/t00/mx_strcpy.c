char *mx_strcpy(char *dst, const char *src);

char *mx_strcpy(char *dst, const char *src){
    char *save = dst;

    while((*dst++ = *src++));
    return save;
}

