# include<stdio.h>// input string from the user using %c.
int main(){

    char str[100];
    char ch;
    int i=0;

    while(ch!='\n'){

       scanf("%c", &ch);
       str[i]=ch;
       i++;

    }
    puts(str);
    


    return 0;
}