# include<stdio.h>// pass or fail of a student as per his marks
int main() {
    int marks;
    printf(" enter marks : ");
    scanf("%d", &marks);
    if (marks >30 && marks <=100) {
        printf("pass");
    }
    else if (marks >=0 && marks <=30) {
        printf(" fail");

    }
    else if (marks >100) {
        printf(" wrong marks");
    }
    return 0;
}
