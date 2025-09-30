# include<stdio.h> // structure in array.

struct student{
    int roll;
    float cgpa;
    char name[100];
};

void studentinfo(struct student s1);


int main(){
    struct student s1 = {474,9.9,"parth"};
    

    studentinfo(s1);
    return 0;
}

void studentinfo(struct student s1){

    struct student *ptr = &s1;

    printf("roll no : %d", ptr->roll);
    printf("cgpa : %f", ptr->cgpa);
    printf(" name : %s", ptr->name);

}