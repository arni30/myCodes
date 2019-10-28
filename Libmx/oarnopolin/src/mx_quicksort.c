#include "libmx.h"

int mx_quicksort(char **arr, int left, int right) {
    int count = 0;

    if(arr == NULL){
        return -1;
    }
        if (left < right) {
            count = 1;
            int first = left;
            int last = right;
            int  middle = (first + last) / 2;

            while (first <= last) {
                while (mx_strcmp(arr[first],arr[middle]) < 0) first++;
                while (mx_strcmp(arr[last],arr[middle]) > 0) last--;
                char *tmp = arr[first];
                arr[first] = arr[last];
                arr[last] = tmp;
                first++;
                last--;
                count++;
            }
            mx_quicksort(arr, left, last);
            mx_quicksort(arr, first, right);
        }
    return count;
}
