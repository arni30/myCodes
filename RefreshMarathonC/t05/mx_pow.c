double mx_pow(double n, int pow);

double mx_pow(double n, int pow){
    double result = 1.0;
    
    if(pow == 0){
        return 1;
    }
    else if(pow == 1){
        return n;
    }
    else if (pow > 1){
        for(int i = 0; i < pow; i++){
            result *= n;
        }
    return result;
    }
    return 1;
}

