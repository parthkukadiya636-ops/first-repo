# include<stdio.h>// claculate the sum of two 2-D vector and make a function of sum and print it.

struct vector{
    int x;
    int y;
};

void calcsum(struct vector v1,struct vector v2,struct vector sum);
int main(){
    struct vector v1 = {5,7};
    struct vector v2 = {7,9};
    struct vector sum = {0};

    calcsum(v1,v2,sum);
    return 0;
}



void calcsum(struct vector v1,struct vector v2,struct vector sum){
    sum.x = v1.x +v2.x;
    sum.y = v1.y + v2.y;
    
    printf("sum of x component of the vector is :%d\n", sum.x);
    printf("sum of y component of the vecotr is :%d", sum.y);
}