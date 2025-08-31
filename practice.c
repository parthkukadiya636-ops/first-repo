# include<stdio.h>
void square_( int *n);
int main() {
    int number = 4;
    square_(&number);
    printf(" number is :%d \n", number);
    return 0;
}
void square_(int *n){
     *n= (*n) * (*n);
     printf(" square of the number is :%d \n", *n);
}