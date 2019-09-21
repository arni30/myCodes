char *mx_strncpy(char *dst, const char *src, int len);

char *mx_strncpy(char *dst, const char *src, int len){
    char *changed = dst;
    if(dst == 0){
        return 0;
    }
    while (len-- && *src){
        *dst = *src;
        dst++;
        src++;
    }
    *dst = '\0';
    return changed;
}
