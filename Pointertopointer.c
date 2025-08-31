# include<stdio.h>// find the value of price using pointer to pointer.
int main () {
    float price = 100.0;
    float *ptr = &price;
    float **pptr = &ptr;
    printf("%f", **pptr);
    return 0;
}
/*pointers in function call
1)call by value
2)call by reference
*/