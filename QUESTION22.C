# include<stdio.h>// write a function that prints NAMASTE if user is indian and BoNJOUR if the user is french.
void Namaste();
void Bonjour();

int main() {
    char ch;
    printf(" enter f for french and i for indian :");
    scanf("%c", &ch);
    
    if(ch == 'i'){
       Namaste();
    }
    else{
        Bonjour();
    }

    return 0;
}

void Namaste() {
    printf(" Namaste \n");
}

void Bonjour() {
    printf(" Bonjour \n");
}