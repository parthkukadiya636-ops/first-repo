# include<stdio.h>// calender of the  1 year.
int main() {
    int i, a;
    int x=0;
    int r=0;

        for(int i=1;i<=7;i++){
            int a=1;
            r=0;    
            if(i==1){
                printf("january \n");
                printf("  M  T  W  T  F  S  S\n");
            }
            if(i==2){
                printf("february  \n");
                 printf("  M  T  W  T  F  S  S\n");
            }
            if(i==3){
                printf("\nmarch   \n");
                 printf("  M  T  W  T  F  S  S\n");
            }
            if(i==4){
                printf("april \n");
                 printf("  M  T  W  T  F  S  S\n");
            }
            if(i==5){
                printf("\nmay \n");
                 printf("  M  T  W  T  F  S  S\n");
            }
            if(i==6){
                printf("\njune \n");
                 printf("  M  T  W  T  F  S  S\n");
            }
            if(i==7){
                printf("july \n");
                 printf("  M  T  W  T  F  S  S\n");
            }

            while(a<=28){
                x=x%7;
                for (int i = 0; i<x && a==1; i++)
                {
                    printf("   ");
                    r++;
                }
                if(r==7){
                    printf("\n");
                    r=0;
                }
                    printf("%3d", a);
                    x++;
                    r++;
                    a++;
            }
            

            
        if (i!=2){
        a=29;
        if(r==7){
              printf("%3d", a);
        x++;
                    printf("\n");
                    r=0;
                }
                r++;
        
        a=30;
        if(r==7){
              printf("%3d", a);
        x++;
                    printf("\n");
                    r=0;
                }
                r++;
       
        if(i%2!=0){
        a=31;
        if(r==7){
            printf("%3d \n", a);
                    printf("\n");
                    r=0;
                }
        x++;r++;
     
       
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


  