# include<stdio.h>
int main( )
{
    // Array is structured data with same datatype in continues format.
    int marks1= 97;
    int marks2 = 98;
    int marks3 = 99;// in place of three variable we can write it in one variable using array in structed way.

    int marks[] = {97,98,99};

    int marks[3];
    
    printf("enter marks of phy : ");
    scanf("%d", &marks[0]);

    printf("enter marks of chem : ");
    scanf("%d", &marks[1]);

    printf("enter marks of math: ");
    scanf("%d", &marks[2]);

    printf("phy =%d , chem =%d, math =%d", marks[0], marks[1], marks[2] );
    return 0;
    /* pointer arithmetic :

    case 1:
    pointer can be increament or decreament 
    as an example :
    int age = 22;
    int *ptr = &age;
    ptr ++; 
    output will be the address of ptr wil be increasd by 4 bytes as its data type is int .

    case :2 
    if it has float datatype it will be increased by float bytes.

    case 3:
     if it has character datatype it will be increased by character bytes.
     
     
     we can  also substract one pointer from another.
     we can also compare two pointer . */ 
   
}