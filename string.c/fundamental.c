 #include<stdio.h>
 int main(){
    char *ptr = "parth kukadiya";// value can change any anytime you want by storing it again.
    puts(ptr);
    ptr = "parth";
    puts(ptr);




    char name[] = "parth kuakdiya"; // value cannot be change 
    puts(name);
    char name[]= "parth";
    puts(name);

    return 0;
 }