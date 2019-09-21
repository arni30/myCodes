int mx_factorial_iter(int n);

int mx_factorial_iter(int n){
    int factorial = 1;
    if(n == 0){
        return 1;
    }
    if(n > 0 && n < 13){
        for(int i = 1; i <= n; i++){
            factorial *= i;
        }
        return factorial;
    }
    return 0;
}
