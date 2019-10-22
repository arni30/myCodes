int mx_strcmp(const char *s1, const char *s2);
int mx_bubble_sort(char **arr, int size);

int mx_bubble_sort(char **arr, int size){
    int counter = 0;
    for(int i = 1; i < size; i++){
        for(int j = i+1; j < size; j++){
            if(mx_strcmp(arr[i],arr[j]) == 1){
                char *buf = arr[i];
                arr[i] = arr[j];
                arr[j] = buf;
                counter++;
            }
        }
    }
    return counter;
}
