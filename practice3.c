#include<stdio.h>
int main() {
    float x;
    printf("enter a number in decimal digits: ");
    scanf("%f", &x);
    int y = x;
    printf(" paisa is : %f \n", x-y);
    printf("rupees is : %d", y);

    return 0;
}