int mx_gcd(int a, int b);

int mx_gcd(int a, int b){
    if(b == 0){
        return a;
    }
    if(a < 0){
        a = a * -1;
    }
    if(b < 0){
        b = b * -1;
    }
    return mx_gcd(b, a % b);
}
