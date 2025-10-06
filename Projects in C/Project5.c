# include<stdio.h>

# define max_user 10

typedef struct{
        char username[30];
        char password[30];
}user;

user users[max_user];
void register_user();
int login_user();
int user_count = 0;


int main(){
int choices;
int user_index;
while(1){
    printf("welcome to user management sysytem");
    printf("\n 1. register");
    printf("\n 2. login");
    printf("\n 3. exit");

    printf("\nselect any of the choices from above: ");
    scanf("%d",&choices);



switch(choices){
    case 1:
    register_user();
    break;
    case 2:

    user_index = login_user();

    if(user_index>=0){
        printf("login successful!!.welcome %s", users[user_index].username);
    }

    else{
        printf("login failed!! .incorrect username or password.");
    }
    break;
    case 3:
    printf("exiting programe");
    return 0;

    break;
    default:

    printf("\ninvalid option. please try again!!!\n");
    break;
}
}
return 0;
}
void register_user(){

    if(user_count == max_user){
        printf("no more registration are allowed !!");
    }
    int new_index = user_count;

    printf("\nRegister a new user\n");
    printf("enter username:");
    fgets(users[new_index].username, 30,stdin);



}

int login_user(){
    return -1;
}