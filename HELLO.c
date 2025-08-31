# include<stdio.h>
// iterator; counter
// i=1 ==i++(post increament operator)
//++i (pre increament operator)
int main() {
    int i=1;
for( i=1;i<=5;i++){
    printf(" world \n");
}

do{
    printf("%d \n", i);
    i++;
}while(i<=5);
return 0;
   
}