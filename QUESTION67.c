# include<stdio.h>
int main(){
    char str[9999];
    printf("enter the string:");
    scanf("%s", str);

    int counts[10]={0};
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='0' && str[i]<='9'){
            counts[str[i]-'0']++;
        }
    }
    for(int i=0;i<10;i++){
        printf("%d", counts[i]);
    }
    return 0;
}