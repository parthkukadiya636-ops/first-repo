# include<stdio.h>// print the name using string function and array.
void printstring(char arr[]);
int main() {

    char firstname[]= "Parth";
    char lastname[] = "Kukadiya";

    printstring(firstname);
    printstring(lastname);


    return 0;
}


void printstring(char arr[]){
    for(int i=0; arr[i] != '\0'; i++){
        printf("%c", arr[i]);
    }

}