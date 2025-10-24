# include<stdio.h>

int _swap(int *a, int *b);
int main() {
    int x=5, y= 4;


    _swap(&x,&y);
    printf("value of x =%d and y= %d ", x,y);
    return 0;


}
 

int _swap(int *a, int *b){
    int temp =*a;
    *a=*b;
    *b= temp;
}