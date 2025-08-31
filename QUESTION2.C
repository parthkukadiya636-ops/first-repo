# include<stdio.h>
int main() {
   char x;
   printf(" enter a character ");
   scanf("%c", &x);
   if(x>='0' && x<='9'){
   printf( "character is a digit : %c" , x);
   }else {
   printf("character is nota digit : %c", x);
   }


  return 0;


}
