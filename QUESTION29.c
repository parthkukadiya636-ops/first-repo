# include<stdio.h>

float Areasquare(float side);
float Areacircle(float rad);
float rectangleArea(float a,float b);
int main() {
    float a = 5.0;
    float b = 10.0;

    printf(" area is : %f",rectangleArea(a, b));
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