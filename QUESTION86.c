int numSquares(int n) {
    int x= sqrt(n);
    int y= x*x;
    int temp =n;

    if(n==y){
        return 1;
    }
    for(int a=1 ; a*a<=n ; a++){
        int b = n- a*a; 
        int s =  sqrt(b);
        if(s*s ==b){
            return 2;
        }
    }
    while(temp%4==0){
        temp = temp/4;
    }
    if(temp%8 ==7){
        return 4;
    }
    return 3;

}