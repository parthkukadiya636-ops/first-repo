# include<stdio.h>
int modu_(int x , int y);
int main(){
modu_(2,5);
    return 0;
}
int modu_(int x, int y){
    int n =y/x;
    int r = y - x*n;
  printf("%d", r);
}
