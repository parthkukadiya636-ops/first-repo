# include<stdio.h>
int main(){
    // int n;
    // printf("enter the number of rows:");
    // scanf("%d", &n);
    // for(int i=1;i<=n;i++){
    //      char x ='a';
    //     for(int j=1;j<=i;j++){
            
    //         printf("%c", x);
    //         x++;
    //     }
    //     printf("\n");

    // }


    #include <stdio.h>


    int rows = 4;
    int i, j;
    
    
    for (i = 1; i <= rows; i++) {
        
        
        for (j = 1; j < i; j++) {
            printf("  "); // Print two spaces for alignment
        }
        
        
        for (j = 1; j <= rows - i + 1; j++) {
            printf("%d ", j); 
        }
        
        
        printf("\n");
    }

    
    return 0;
}