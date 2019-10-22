int mx_strcmp(const char *s1, const char *s2);
int mx_binary_search(char **arr, int size, const char *s, int *count);

int mx_binary_search(char **arr, int size, const char *s, int *count){
    int left = -1;
    int right = size;
    while(left < right - 1){
        (*count)++;
        int middle = (left+right) / 2; 
        if(mx_strcmp(arr[middle], s) == -1){
            left = middle;
        }
        else{
            right = middle;
        }
    }
    return right;
}
