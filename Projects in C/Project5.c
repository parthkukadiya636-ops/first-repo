# include<stdio.h>

typedef struct student{
    int id;
    char name[100];
}stu;

int main(){
    FILE *ptr;
    ptr = fopen("stu.txt","w");

stu comp[100];
printf("enter the details:\n");
 
for(int i=0;i<100;i++){
    
    printf("\nid:");

    scanf("%d", &comp[i].id);

    printf("name:");

    scanf(" %s", comp[i].name);

   
  
    fprintf(ptr,"id:%d name:%s\n", comp[i].id,comp[i].name);
    
}
fclose(ptr);


    return 0;
}