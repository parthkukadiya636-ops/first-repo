#include <stdio.h> 
// own power function.... 
int main() {
    int x, y, z, n;
    printf("Enter the number that is need to be powered: ");
    scanf("%d", &x);
    printf("Enter the power of the number: ");
    scanf("%d", &y);

    n = 1;
    for (int i = 1; i <= y; i++) {
        z = n * x;
        n = z;
    }
    printf("The answer is: %d\n", z);
    return 0;
}