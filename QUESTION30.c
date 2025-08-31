# include<stdio.h>// write three functions for area of square, circle, and rectangle.
 

float Areasquare(float side);
float Areacircle(float rad);
float rectangleArea(float a,float b);
int main() {
    float side,rad,a,b;
    printf("enter the side of the square :");
    scanf("%f", &side);
    printf("area of the square is : %f \n", Areasquare( side));

     printf("enter the radius of the circle :");
    scanf("%f", &rad);
    printf("area of the circle is : %f \n",  Areacircle( rad));
     
    printf("enter the side a :");
    scanf("%f", &a);
     printf("enter the side b:");
    scanf("%f", &b);
    printf("area of the rectangle is : %f \n", rectangleArea( a, b)) ;
    return 0;



}
float Areasquare(float side) {
   return side * side;
}
float Areacircle(float rad) {
    return 3.14  * rad * rad;
}
float rectangleArea(float a, float b) {
   return a*b;
}