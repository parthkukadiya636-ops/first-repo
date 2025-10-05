# include<stdio.h>// print the table of a number input by the user.
int main() {
    int i,n,R;
    printf("enter the number : ");
    scanf("%d", &n);

    for(i=1;i<=10;i++) 
    {
       printf(" %d \n", n * i );
    }
    
}