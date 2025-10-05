# include<stdio.h>// sum of n natural numbers.
int main() {
    int n, i;
    printf(" enter number :");
    scanf("%d",&n);
     int sum =0;
     for(i=1;i<=n;i++){
       
        sum= sum +i;
    }
     printf("sum is : %d \n",sum);

   
    for(i=n;i>=1;i--){
       
        sum= sum +i;
    }
    printf("sum is : %d \n",sum);
    return 0;
    
}