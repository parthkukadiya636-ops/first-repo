# include<stdio.h>
void _square(int *n);
int main() {
    int number=4;
    int *n= &number;
    _square(&number);
    printf(" number is : %d", number);
    return 0;
}
void _square(int *n) {
    *n =(*n) * (*n);
    printf("square is :%d \n", *n);
}