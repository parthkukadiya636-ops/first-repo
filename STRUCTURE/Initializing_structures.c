# include<stdio.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
};
int main(){
    struct student s1 = {474, 9.9 , "parth"};// iniatializing structure
    printf("the roll no of the sudent is :%d",s1.roll);
    printf("the cgpa of the student is :%f", s1.cgpa);
    printf("the name of the student is :%s", "parth");
//(methods to print the output) 

    //in pointer formate

     struct student *ptr = &s1;
    printf("roll no of the student is : %d", (*ptr).roll);


    // or


    printf("roll no of the student is :%d", ptr->roll);
return 0;
}