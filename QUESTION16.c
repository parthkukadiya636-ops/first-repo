# include<stdio.h>// print reverse of the table for a number n.
int main() {
    int i,n;
    printf(" enter a number :");
    scanf("%d", &n);

    for(i=10;i>=1;i--)
    {
        printf("%d \n", i * n);
    }
    return 0;
}