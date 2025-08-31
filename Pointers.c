# include<stdio.h>// pointers.
int main() {
    int age = 22;
    int *ptr = &age;//& -> address of the operator.
    //* -> value of the address of the operator.

    printf("%u \n", &ptr);// %p or %u is used for address. 
    printf("%u \n", ptr);
    printf("%u \n", &age);
    printf("%d \n", age);
    printf("%d \n", *ptr); 
    printf("%d \n", *(&age));
    return 0;
}