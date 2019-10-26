#include "libmx.h"

void swap(char *x, char *y) { 
	char *temp;
	temp = y;
	*y = *x;
	x = temp;
}

unsigned int partition(char *array, unsigned int p, unsigned int q, unsigned int pivotLocation) {	
	char *pivot = NULL;
	unsigned int i, j;
	
	*pivot = array[pivotLocation];
	swap(&array[pivotLocation], &array[q]);
	i = p;
	for(j = p; j < q; j++) if(array[j] <= *pivot) swap(&array[i++], &array[j]);
	swap(&array[q], &array[i]);
	return i;
}

int mx_quicksort(char **arr, int left, int right) {
	int r; 
    int middle;
    int count = 0;
	if(left < right) {
		middle = (left+right)/2;
		r = partition(*arr, left, right, middle);
		mx_quicksort(arr, left, r-1);
		mx_quicksort(arr, r+1, right);
	}
    return count;
}

