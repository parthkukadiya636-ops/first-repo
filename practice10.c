# include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    
    int marks[n],sum=0;
    for(int i=0;i<n;i++){
        
        scanf("%d", &marks[i]);

    }
    char gen;
    
    scanf(" %c", &gen);
    for (int i=0;i<n;i++){
        if(gen== 'b'){
            if(i%2==0){
            sum = sum + marks[i];
            }
        
        }
        
        else{
            if(i%2!=0){
            sum = sum + marks[i];
            }
        }
       
    }
    printf("%d", sum);
    
    return 0;
}