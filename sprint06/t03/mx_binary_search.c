#include <stdio.h>

int mx_strcmp(const char *s1, const char *s2);
int mx_binary_search(char **arr, int size, const char *s, int *count);
int main(){
    char *arr[] = {"222", "Abcd", "aBc", "ab", "az", "z"};
    static int count = 0;
    printf("%d\n",mx_binary_search(arr, 6, "aBc", &count));
    printf("%d",count);
}

int mx_binary_search(char **arr, int size, const char *s, int *count){
    int mid = size / 2;
    if (mx_strcmp(arr[mid],s) == 0){
        return mid;
    }
    if(mx_strcmp(arr[mid], s) == 1){
        return mx_binary_search(arr, mid + 1, s, count);
    }
    else if(mx_strcmp(arr[mid], s) == -1){
        return mx_binary_search(arr, mid - 1, s, count);
    }
    return -1;
}
