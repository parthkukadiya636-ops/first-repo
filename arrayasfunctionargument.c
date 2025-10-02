#include<stdio.h>// array as function argument.

void print_Numbers(int arr[] , int n);
int main() {
    int arr[]= {1, 2, 3, 4, 5, 6};
    print_Numbers(arr, 6);
    
    return 0;
}
void print_Numbers(int arr[], int n){
    for(int i=0;i<n;i++){
        printf("%d \t", arr[i]);
}
printf("\n");
}