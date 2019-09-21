void mx_arr_rotate(int *arr, int size, int shift);

void mx_arr_rotate(int *arr, int size, int shift){
    if(shift < 0){
        shift = size + shift;
    }
    while(shift != 0) {       
            int temp = arr[size - 1];
    for(int i = size - 1; i > 0; i--){
        arr[i] = arr[i - 1];      
    }
    arr[0] = temp;
    shift--;
    }
} 
 
