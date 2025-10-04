# include<stdio.h>
int main() {
    int physics, chemistry, maths, english , computer ,total;
    printf(" enter marks of physics :");
    scanf("%d", &physics);
     printf(" enter marks of chemistry :");
    scanf("%d", & chemistry);
     printf(" enter marks of maths :");
    scanf("%d", & maths);
     printf(" enter marks of computer :");
    scanf("%d", &computer);
     printf(" enter marks of english :");
    scanf("%d", &english);
    total=(physics + chemistry + maths + computer + english);
    
    printf("total =%d \n",total);
    float percentage;
    percentage =( total * 100 /500);

    printf("percentage =%f", percentage);
   
    return 0;
}