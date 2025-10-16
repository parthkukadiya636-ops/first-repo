# include<stdio.h>// program to find the sum of digits of a number.
int main() {
    int n,sum=0;
    printf(" enter a number to find the sum of digits :");
    scanf("%d", &n);
    while(n>0){
    sum = sum + n%10;
    n=n/10;
    }
    printf("sum is :%d", sum);
    return 0;
}