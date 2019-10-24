#include "libmx.h"

int mx_quicksort(char **arr, int left, int right){
    int count = 0;
    if (left < right)
    {
        int min = left; 
        int max = right; 
        int middle = *arr[(left + right) / 2];
        do
        {
            while (*arr[left] < middle) left++;
            while (*arr[right] > middle) right--;
            if (left <= right)
            {
                int tmp = *arr[left];
                arr[left] = arr[right];
                *arr[right] = tmp;
                left++;
                right--;
            }
            count++;
        } while (left <= right);
        mx_quicksort(arr, left, max);
        mx_quicksort(arr, min, right);
    }
    return count;
}
