# include<stdio.h>// sum of columns and rows.
int main() {

    int n,a[50][60],sum=0 ;
    printf("enter the no of rows and columns:");
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d", &a[i][j]);
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d \t", a[i][j]);
        }
        printf("\n");
    } 


int k=1;
    for(int i=0;i<n;i++){
        sum =0;

        for(int j=0;j<n;j++){
            sum = sum + a[i][j];
            
        }
        printf("sum of %d row:%d \n", k,sum);
        k++;
    }

k=1;
    for(int j=0;j<n;j++){
        sum =0;

        for(int i=0;i<n;i++){
            sum = sum + a[i][j];
            
        }
        
        printf("sum of %d column:%d \n", k,sum);
        k++;
    
    }

    return 0;
}