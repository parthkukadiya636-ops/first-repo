# include<stdio.h>// to print the address of a number by call by reference to have the same address.
void printAddress(int *n);
int main() {
    int n=4;
   
    printAddress(&n);
    printf("address of n is : %u \n", &n);
    return 0;
} 
void printAddress(int *n) {
    printf("address of n is : %u \n", n);
}