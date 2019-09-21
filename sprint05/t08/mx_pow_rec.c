double mx_pow_rec(double n, unsigned int pow);

double mx_pow_rec(double n, unsigned int pow){
    if( n == 1 || pow == 0){
        return 1;
    }
    else if (pow == 1){
        return n;
    }
    else{   
        return mx_pow_rec(n,pow - 1) * n;
    }
    return 0;
}
