# include<stdio.h>// write a programe in c to find the maximum number between two numbers using a pointer.
void maxnumber(int *n1, int *n2);
int main() {
    int a=4;
    int b=5;
    maxnumber(&a,&b);
    return 0;

}
void maxnumber(int *n1, int *n2){
    if (*n1> *n2){
        printf("a is greater than b");
    }
    else{
        printf("b is greater than a");
    }
}