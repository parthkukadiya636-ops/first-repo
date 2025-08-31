# include<stdio.h>
int main() {
    printf("enter i for india or f for french");
    char ch;
    scanf("%c", &ch);

    if(ch=='i'){
        printf("Namaste \n");
    }
    else{
        printf("Bonjour \n");
    }

    return 0;
}
