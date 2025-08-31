# include<stdio.h>// write a function to find the square root of a number.
 #include<math.h>
float squareroot(float n);
int main() {
    printf(" square root of the number is :%f", squareroot(25.00));
   
    return 0;


}
float squareroot(float n){
   
    return pow(n,0.5);
}