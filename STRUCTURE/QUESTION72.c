# include<stdio.h>

typedef struct student{
    int id;
    char name[100];
}stu;

int main(){
    

stu comp[100];

 
for(int i=0;i<100;i++){
    
    FILE *fptr;
    
    fptr = fopen("record.txt", "w");
    printf("\nid:");

    scanf("%d", &comp[i].id);

    printf("name:");

    scanf(" %s", comp[i].name);

   
  
    fprintf(fptr,"id:%d name:%s\n", comp[i].id,comp[i].name);
    fclose(fptr);
}


    return 0;
}