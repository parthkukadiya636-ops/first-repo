# include<stdio.h>// print a table using new function.
void printTable( int n);
int main() {
    int n;
    printf(" enter a number n: ");
    scanf("%d", &n);

    printTable(n);// n is called the argument/ actual parameter
    return 0;


}
void printTable(int n) {// here n is parameter/formal parameter
    for(int i=1; i<=10; i++) {
        printf( "%d \n", i*n);
    }
}