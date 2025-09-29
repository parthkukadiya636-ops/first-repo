# include<stdio.h>//write a programe to check whether the character is present in the string or not.

void checkchar(char str[], char ch);



int main(){


    checkchar("parth" , 'a');


    return 0;
}

void checkchar(char str[], char ch){

    for(int i=0; str[i] != '\0'; i++){

        if(str[i]== ch){
            printf("character is present !");
            return;
        }
        


    }
    printf("character is not present ");

    
}