# include<stdio.h>
int main() {
    int n,m;
   printf("enter number of rows :");
   scanf("%d", &n);
   for(int i=1;i<=n;i++){
    for(int i=1;i<=4;i++){
        printf("%d", i);
        printf(" ");
    }
    printf("\n");
   }
   

        return 0;
}