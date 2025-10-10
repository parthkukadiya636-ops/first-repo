# include<stdio.h>// make the string reverse and check whethe the given string is palindrome or not.
# include<string.h>
int main(){
    char str[50];
    char reverse[50]; 
    printf("enter a string:");
    gets(str);
     strcpy(reverse,str);
    int x= strlen(reverse);
    for(int i=0;i<x/2;i++){
        char temp;
        temp = reverse[i];
        reverse[i] = reverse[x-i-1];
        reverse[x-i-1] = temp;
       
    }
    puts(reverse);
    
    
    
    
    if(strcmp(str,reverse)==0){
        printf("it is palindrome");
    }
    else {
        printf("it is not palindrome");
    }
    
    return 0;
}