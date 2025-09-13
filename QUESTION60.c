# include<stdio.h> // arrange the element of 1-D array in ascending order.
int main(){
    int n,arr[50];
    for(int i=0;i<3;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<3;i++){
        if(arr[i]>arr[i+1]){
            int tem=arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = tem;
        }
        
        printf("%d", arr[i]);
       
      
      
    }

    return 0;
}