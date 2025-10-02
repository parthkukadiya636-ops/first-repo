# include<stdio.h>// write a programe to print first n odd natural numbers and sum and average.
int main() {
    int n;
    printf("enter the number of terms :");
    scanf("%d", &n);
    for(int i=1; i<=n;i++){
        printf("%d \n", 2*i-1);
    }
    int sum =0;
    for(int i=1; i<=n;i++){
        sum =sum +2*i-1;
    }
    printf("sum is : %d \n", sum);
    printf("average is : %d", sum/ n);
    return 0;
}