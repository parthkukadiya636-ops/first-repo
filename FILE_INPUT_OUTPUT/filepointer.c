# include<stdio.h>// syntax of read write any file.
int main(){
    FILE *fptr;
    fptr = fopen("QUESTION2.C", "r");
    fclose(fptr);


    char ch;
    fscanf(fptr, "%c", &ch);
    printf("charcater = %c" ,ch);
    printf("charcater = %c" ,ch);

    printf("charcater = %c" ,ch);
    printf("charcater = %c" ,ch);
    printf("charcater = %c" ,ch);
    
    fclose(fptr);
    
    return 0;

}