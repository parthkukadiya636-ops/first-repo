# include<stdio.h>
# include<string.h>

struct student{

    int roll;
    float cgpa;
    char name[100];

};
int main(){

struct student ece[100];
ece[0].roll = 474;
ece[0].cgpa= 9.9;
ece[0].name;
strcpy(ece[0].name, "parth");



printf("roll no of the student is: %d\n ",ece[0].roll );
printf("cgpa of the student is : %f\n", ece[0].cgpa);
printf("name of the student is : %s", ece[0].name);



    return 0;
}