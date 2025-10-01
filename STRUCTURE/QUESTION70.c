# include<stdio.h>// make complex number and print real and imaginary number with the help of structure.    

struct complex{
    int real;
    int img;
};


int main(){

    struct complex number1 = {5,7};
    struct complex *ptr = &number1;
    printf("the real number is :%d\n", ptr->real);
    printf("the imginary number is :%d", ptr->img);
    return 0;
}