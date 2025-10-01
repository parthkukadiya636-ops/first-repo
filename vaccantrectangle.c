# include<stdio.h>
int main() {
    int n;
    printf("enter the number of rows :");
    scanf("%d", &n);
    int i,j;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n+2; j++){
        if(i==1 || j==1  || j==2 || j==3 || j==4 || j==5){
            printf("*");
        }
        else if(i==2 || j==1 ||j==5){
            printf("*");
        }
         else if(i==3 || j==1 || j==2 || j==3 || j== 4 || j==5){
            printf("*");
        }
        else{
            printf(" ");
        }
        
    }
    printf("\n");
}
return 0;
 
}




        