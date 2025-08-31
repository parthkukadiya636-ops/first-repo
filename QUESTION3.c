# include<stdio.h>
// write a program to print the smallest no of 2
int main() {
    int a,b;
    printf(" enetr a no a :");
    scanf("%d", &a);
      printf(" enetr a no b :");
    scanf("%d", &b);
    if ( a>b && b<a){
        printf("smallest number is b : %d", b);
    }
    else {
        printf("smallest no is a : %d", a);
    }
    return 0;

}