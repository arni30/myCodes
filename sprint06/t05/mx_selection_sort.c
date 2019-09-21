int mx_strcmp(const char *s1, const char *s2);
int mx_strlen(const char *s);
int mx_selection_sort(char **arr, int size);

int mx_selection_sort(char **arr, int size){
    int swap = 0;
   
    for(int i = 0; i < size - 1; i++){
        int min_i = i;
        for(int j = i + 1; j < size; j++){
            if(mx_strlen(arr[min_i]) > mx_strlen(arr[j])){
                min_i = j;
            }
            if(mx_strlen(arr[min_i]) == mx_strlen(arr[j])){
                if(mx_strcmp(arr[min_i], arr[j]) == 1){
                    min_i = j;    
                }
            }
        }
        if(min_i != i){
            char *t = arr[i];
            arr[i] = arr[min_i];
            arr[min_i] = t;
            swap++;
        }
    }
    return swap;
}
