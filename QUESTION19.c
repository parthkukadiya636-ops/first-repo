#include<stdio.h>
int main() {
    float physics,maths,chemistry,english, computer,percentage;
    printf(" enter the marks of physics");
    scanf("%f",&physics);
    printf(" enter the marks of chemistry");
    scanf("%f",&chemistry);
    printf(" enter the marks of maths");
    scanf("%f",&maths);
    printf(" enter the marks of english");
    scanf("%f",&english);
    printf(" enter the marks of computer");
    scanf("%f",&computer);
    float total = physics +chemistry+ maths+ english+ computer;
    printf(" total marks = %f \n",  total);
    printf(" percentage : %f", total*100/500);
    return 0;



}