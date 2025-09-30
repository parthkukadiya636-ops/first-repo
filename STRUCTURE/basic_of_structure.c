# include<stdio.h>
# include<string.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main(){
struct student s1;
s1.roll = 474;
s1.cgpa = 9.9;
// s1.name = "parth";

strcpy(s1.name, "parth");
printf("the name of the student is :%s\n", s1.name);
printf("the cgpa of the student is : %f\n", s1.cgpa);
printf("the roll no of the student is: %d", s1.roll);






return 0;
}