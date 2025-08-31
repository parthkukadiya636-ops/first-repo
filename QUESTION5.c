# include<stdio.h>
int main() {
    float marks;
    printf("enter marks :");
    scanf("%f", &marks);
    if( marks>90){
        printf(" A1 grade");
    }
    if ( marks>80 && marks <=90){
        printf("A2 grade");
    }
    if ( marks >70 && marks <=80){
        printf("B1 grade");
    }
    if ( marks >60 && marks<=70 ){
        printf("B2 grade");

    }
    if ( marks >50 && marks<=60 ){
        printf("C1 grade");
    }
    if ( marks >40 && marks<=50 ){
        printf("fail");
        
    }
    return 0;
}