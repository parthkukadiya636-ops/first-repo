# include<stdio.h>// attendence sheet with storing the data in a file.
int main(){
int id,choices,count1=0,count2=0,n;
n=1;
 FILE *fptr;
fptr = fopen("sheet.txt","w");
while(n<6){
   
    printf("enter your Id :");
    scanf("%d", &id);
    printf("1.present\n");
    printf("2.absent\n");
    printf("choose from the above two choices:\n");
    scanf("%d", &choices);
    if(choices==1){
        printf("present\n");
        fprintf(fptr,"Id:%d present\n",id);
        
        count1++;
    }
    else{
        printf("absent\n");
         fprintf(fptr,"Id:%d absent\n",id);
        
        count2++;
    }
    n++;
    
}
fprintf(fptr,"present is: %d\n",count1);
fprintf(fptr,"absent is: %d",count2);
fclose(fptr);

return 0;
}