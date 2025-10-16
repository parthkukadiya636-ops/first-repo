 // user management sysyem.
# include<stdio.h>  // user management sysyem.
# include<string.h>

typedef struct user_account{
    char holder_name[30];
    char password[30];
}acc;
acc accounts[10];
int count_user=0;
void  registration();
int login_user();

int main(){
int choices;
int user_no;

while(1){
    printf("\n--------Welcome to user management system!!!--------\n");
    printf("1.register\n");
    printf("2.login\n");
    printf("3.exit\n");
    

    printf("enter the choices above given.");
    scanf("%d", &choices);
    getchar();
    
    switch(choices){
    case 1:printf("you have choose registration\n");
    registration();
    
    break;
    case 2:printf("you have choose login\n");
    if(login_user()==-1){
        printf("\nlogin failed!! incorrect username or password.\n");
    }
    
    break;
    case 3:
    printf("exiting the system!!\n");
     return 0;
    break;
    }

    }
return 0;
}
void  registration(){
    printf("enter account holder name:\n");
        
    fgets(accounts[count_user].holder_name,30,stdin);
    printf("enter the password:\n");
    fgets(accounts[count_user].password,30,stdin);
    printf("\nregistered successfully!!\n");
    count_user++;
}
int login_user(){
    char username[30];
    char password[30];
     int x = count_user;
    
    printf("enter account holder name:\n");
    fgets(username,30,stdin);
    printf("enter the password:\n");
    fgets(password,30,stdin);
for(int i=0; i<=x;i++){

    if(strcmp(username,accounts[i].holder_name)==0 && strcmp(password,accounts[i].password)==0){
        printf("\nlogin successful!! Welcome %s\n",accounts[i].holder_name);
        return 0;
        
    }
    }

return -1;
}
