#include <stdio.h>

int mx_popular_int(const int *arr, int size);
 
 int main(void){
    int size = 4; 
    int arr[] = {2, 2, 4, 4};
    printf("%d",mx_popular_int(arr, size));
 }
int mx_popular_int(const int *arr, int size) {
    int new_arr;
    
    int el = 0;
    int count = 0;

    for (int i = 0; i < size; i++) {
        new_arr = arr[i];

        for (int j = 0; j < size; j++) {
            if (new_arr == arr[j]){
                count++;
            }
        }
        if (count > 0) {
            el = new_arr;
        }
    }
    return el;
}
