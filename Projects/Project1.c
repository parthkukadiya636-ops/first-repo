# include<stdio.h>
int main() {
    int random= 25;
    int guess=0;
    int no_of_guess=0;
    printf("welcome to the world of guessing  number !! \n " );
     

    do{
        printf("enter a guess between (1-100): ");
        scanf("%d", &guess);
        no_of_guess++;

        if(random<guess){
            printf("guess a smaller number. \n");
        }
        else if (random>guess){
            printf("guess a larger number.\n ");
        }
        else{
            printf("congratulation your guessing is correct and you got the numeber correct!!!! in : %d attempts \n ", no_of_guess);
        }
    }while(guess!= random);
    printf(" bye bye thanks for playing the game : \n ");
    printf("come again next time ");
    return 0;

}