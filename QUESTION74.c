# include<stdio.h>
int main(){
char a[50];

int n,pos,y;
printf("enter the no of array element:");
scanf("%d", &n);
for(int i=0;i<n;i++){
    scanf("%d", &a[i]);
}
printf("enter the index for inserting the value:");
scanf("%d", &pos);
printf("enter the value to insert:");
scanf("%d", &y);
int x = a[n-1];
for(int i=n; i>(pos+1);i--){
    
    a[i-1] = a[i-2];
   
}
a[pos] = y;
for(int i=0;i<n;i++){
    printf("%d ", a[i]);
}
printf("%d", x);

return 0;
}