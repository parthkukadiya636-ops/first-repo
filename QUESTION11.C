# include<stdio.h>// program to check if the given number is a natural number
int main() {
    int x;
    printf(" enter a number :");
    scanf("%d", &x);
    
    if( x>=1) {
        printf(" it is a natural number");
    }
    else{
        printf("it is not a natural number");
    }
    return 0;
}