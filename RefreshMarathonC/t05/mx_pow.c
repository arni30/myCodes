double mx_pow(double n, int pow);

double mx_pow(double n, int pow){
    double result;
    int power = pow;
    if (pow == 0){
        result = 1;
    }
    else if (pow == 1){
        result = n;
    }
    else{
        if(power < 0){
        pow *= -1;
        }
        result = n;
        while (pow != 1)
        {
            result *= n; 
            pow--;
        }
        if(power < 0){
            result = 1 / result;
        }
    }
    return result;
}

