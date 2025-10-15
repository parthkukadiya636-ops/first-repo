# include<stdio.h>// make your own power function;
int pow_(int x, int n);
int main(){
    int x,n;
    printf(" enter the number x and it's coefficient n :");
    scanf("%d %d", &x,&n);
    pow_(x,n);
    return 0;
}
 int pow_(int x, int n) {
    int ans=1;
    
    for(int i=1;i<=n;i++){
        ans=ans*x;

    }
    printf("the answer is : %d", ans);
 }