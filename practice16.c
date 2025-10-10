# include<stdio.h>// programe for fibonacci series using 
int fibo(int n);
int main(){
int n;
printf("enter the number of terms:");
scanf("%d", &n);

    for(int i=0;i<=n;i++){
        printf("%d", fibo(i));
    }


    return 0;
}

int fibo(int n){
    
      if(n<=1){
        return n;
      }
      return fibo(n-1)+fibo(n-2);

}