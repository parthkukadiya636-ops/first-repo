# include<stdio.h>// sum of the first n naturals numbers.
int sum(int n);
int main() {
    sum(5);
    return 0;


}
int sum(int n) {
    if (n==1) {
        return 1;
    }
    int sumNm1 = sum(n-1);
    int sumN = sumNm1 + n;
    
     printf("sum of  %d is : %d", n ,sumN);
      return sumN;
}  
   



