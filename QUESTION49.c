# include<stdio.h>// write a programe in c to print all the letters in english alphabet using a pointer.
void alphabet(char *x);
int main(){
    char y;
    
    alphabet(&y);
    return 0;

}
void alphabet(char *x){
char i='A';
while(i<='Z'){
printf("%c", i);
i++;
}
}

