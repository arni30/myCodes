#include <stdbool.h>

void mx_sort(int *arr, int size, bool (*f)(int, int));

void mx_sort(int *arr, int size, bool (*f)(int, int)){
    for (int i = 0; i < size; ++i){
        for (int j = i + 1; j < size; ++j){
            if (f(arr[i], arr[j]) == 1) {
                int a =  arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }
}

