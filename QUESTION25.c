#include<stdio.h>// sum of two numbers using new function.

    int sum(int a , int b);
    int main() {
        int a, b;
        printf(" enter first number a: ");
        scanf("%d", &a);
        printf("enter second number b: ");
        scanf("%d", &b);

      
       printf(" sum is : %d ",sum(a,b));

        
       
        return 0;


}
int sum(int a, int b) {
    
    return a+b;
}
    