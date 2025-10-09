 # include<stdio.h>// wrirte a programe to check whether the given the number is amstrong or not.
 # include<math.h>
 int main(){
int x,count=0,y;
double sum = 0.0;
printf("enter the no :");
scanf("%d", &x);
int n=x;
while(n>0){
    n=n/10;
    count++;
} 

n=x;
while(n>0){
    int r = n%10;
        sum = sum + pow(r,count);
    n=n/10;
}if(sum == x ){
    printf("it is a amstrong number");
}
else{
    printf("it is not a amstrong number");
}


    return 0;
 }