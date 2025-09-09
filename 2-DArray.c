# include<stdio.h>
int main() {
    int marks[2][3];
    marks[0][1] =90;
    marks[0][2] = 89;
    marks[0][3] = 85;
     marks[1][1] = 90;
    marks[1][2] = 88;
    marks[1][3] = 89;


    printf("%d \t", marks[0][1]);
        printf("%d \t", marks[0][2]);
        printf("%d \t", marks[1][1]);
    return 0;
}