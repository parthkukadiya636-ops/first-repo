# include<stdio.h>// write a program to print the slice of the string as per the given number of n and m.

void slice(char str[],int n , int m);

int main(){
char str[100];
fgets(str,100,stdin);


slice(str,0,4);


    return 0;
}

void slice(char str[],int n , int m){
   
for(int i=n;i<=m;i++){
   printf("%c", str[i]);
}

}