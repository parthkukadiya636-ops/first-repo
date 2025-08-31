# include<stdio.h>// find the factorial of n .
int fact(int n);
int main() {
    printf("factorial is : %d", fact(0));
    return 0;


}
int fact(int n) {
    if (n==0) {
        return 1;
    }
    int factNm1 = fact(n-1);
    int factN = fact(n-1) * n;
    return factN;
}