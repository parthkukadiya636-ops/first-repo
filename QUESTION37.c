# include<stdio.h>//sequence of fibonachi by using for loop.
int main() {
    int n1=1,n2=1;
    int n3, n,i;
    printf(" enter the value for n :");
    scanf("%d", &n);
    printf("%d %d", n1,n2);
    for(i=3;i<=n;i++){
        n3=n1 + n2;
        printf("%d \n",n3);
        n1=n2;
        n2=n3;
    }
    return 0;
}