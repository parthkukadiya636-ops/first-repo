bool isPerfectSquare(int num) {
    long long i=1;
    long long x=1;
    while(x<=num){
        if(x== num){
            return true;
        }
        
         x = i*i;
         i++;
    }
    return false;
}