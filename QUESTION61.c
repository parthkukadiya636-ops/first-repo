# include<stdio.h>// calculate the length of the string.
 # include<string.h>

int countlength(char arr[]);


int main(){
    char name[100];

    printf("enter the name :");
    fgets(name, 100, stdin);
    // printf("length of the name is : %d", countlength(name));
int length = strlen(name);
    printf("length is :%d",length-1);
    // we can use the inbuilt inbuilt function like 
    // strlen(name);

    return 0;
}
int countlength(char arr[]){
    int count=0;
   for(int i=1;arr[i]!= '\0'; i++){

    count++;
   }
   return count;

}