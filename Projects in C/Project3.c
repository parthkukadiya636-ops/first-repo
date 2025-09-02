# include<stdio.h>// calender of the  1 year.
int main() {
    int i, a;
 
        for(int i=1;i<=7;i++){
            int a=1;
            
            if(i==1){
                printf("january \n");
                printf(" monday   tuesday  wednesday thursday friday saturday sunday \n");
            }
            if(i==2){
                printf("february  \n");
                 printf(" monday   tuesday  wednesday thursday friday saturday sunday \n");
            }
            if(i==3){
                printf("march   \n");
                 printf(" monday   tuesday  wednesday thursday friday saturday sunday \n");
            }
            if(i==4){
                printf("april \n");
                 printf(" monday   tuesday  wednesday thursday friday saturday sunday \n");
            }
            if(i==5){
                printf("may \n");
                 printf(" monday   tuesday  wednesday thursday friday saturday sunday \n");
            }
            if(i==6){
                printf("june \n");
                 printf(" monday   tuesday  wednesday thursday friday saturday sunday \n");
            }
            if(i==7){
                printf("july \n");
                 printf(" monday   tuesday  wednesday thursday friday saturday sunday \n");
            }

            for(int i=1; i<=4;i++){
            for(int i=1;i<=7;i++){
                printf("%8d", a);
                
                 a++;
                 }
                 printf("\n");

                
            }
            
            if (i!=2){
        a=29;
        printf("%8d", a);
       
        a=30;
        printf("%8d", a);
        
        if(i%2!=0){
        a=31;
        printf("%8d \n", a);
       
        }
    }
            }
        
        
          for(int i=8;i<=12;i++){
            int a=1;
            if(i==8){
                printf("august   \n");
            }
            if(i==9){
                printf("september \n");
            }
            if(i==10){
                printf("october \n");
            }
            if(i==11){
                printf("novemvber \n");
            }
            if(i==12){
                printf("december \n");
            }

            for(int i=1; i<=4;i++){
            for(int i=1;i<=7;i++){
                printf("%d ", a);
              
                a++;
            }
        }
        }
            
            if (i!=2){
        int a=29;
        printf("%d ", a);
        a=30;
        printf("%d  ", a);
        if(i%2==0){
        a=31;
        printf("%d ", a);
        }
    }
        
      return 0;
    }


  