# include<stdio.h>// print the name using string function and array.
 void printstring(char arr[]);

int main(){

    // char name[50];

char firstname[] = "Parth";
char lastname[] = "kukadiya";
printstring(firstname);                            
printstring(lastname);

 /* two function are in picture which inputs the complete name of the word
 or sentence 
1) fgets(string name,size,stdin);-> input
2)puts(string name);->output
*/

return 0;
}




void printstring(char arr[]) {
for(int i=0;arr[i]!='\0';i++){


    printf("%c", arr[i]);
}
printf(" ");
}

// scanf("%s",name);
// printf("your name is %s", name);


// return 0;
// }

