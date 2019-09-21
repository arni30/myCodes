int mx_sqrt(int x);

int mx_sqrt(int x){
    int i = 0;

    if(x == 1 || x ==0){
        return x;
    }
    while (i * i < x)
    {
        i++;
    }
    if(i * i == x){
         return i;
    } 
    else{
        return 0;
    }
    return 0;
}
