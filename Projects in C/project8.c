# include<stdio.h>// bank management system..

void create_account();
void deposit_money();
void withdraw_money();
void check_balance();


typedef struct{
    char username[50];
    int account_no;
    float balance;
}Account;

int main(){
    int choices;

while(1){
    printf("\n---------Bank Management System----------\n");
    printf("1.Create Account\n");
    printf("2.Deposit Money\n");
    printf("3.Withdraw Money\n");
    printf("4.Check Balance\n");
    printf("5.exit\n");

    printf("enter your choices:");
    scanf("%d", &choices);
    getchar();

    switch(choices){
        case 1: 
        create_account();
        printf("\nAccount created successfully!!!\n");
        break;
        case 2:
        deposit_money();
        break;
        case 3:
        withdraw_money();
        break;
        case 4:
        check_balance();
        break;
         case 5:printf("Thanks for using our bank!! Visit again next time");
         return 0;
         break;
        break;
    }
}
return 0;
}
void create_account(){
    Account acc;

    FILE *file = fopen("account.dat", "ab+");

    printf("Enter your name:");
    fgets(acc.username,50,stdin);
    printf("Enter your account number:");
    scanf("%d",&acc.account_no);
    acc.balance = 0;

    fwrite(&acc, sizeof(acc), 1, file);
    fclose(file);   
    return;
 
}
void deposit_money(){
    FILE *file = fopen("Account.dat", "rb+");
    Account acc_r;
    int acc_no;
    float money;
    printf("Enter the account number:");
    scanf("%d", &acc_no);
    printf("Enter the deposit amount:");
    scanf("%f", &money);

    while(fread(&acc_r, sizeof(acc_r),1, file)){
        if(acc_r. account_no == acc_no){
            acc_r.balance += money;
          
            printf("you have sucesfully deposited %.2f Rs in your account",money);
            fclose(file);
            return;
    }
}
fclose(file);


}
void withdraw_money(){
    printf("withdraw money");
}
void check_balance(){

    int acc_no;
    Account acc_read;
    printf("Enter your account number:");
    scanf("%d",&acc_no);
    printf("\n");

    FILE *file = fopen("account.dat", "rb");
    while(fread(&acc_read, sizeof(acc_read),1, file)){
    
        if(acc_read.account_no==acc_no){
            printf("your Account balance is :%.2f\n",acc_read.balance);
           
            fclose(file);
            return;
        }
    }
    fclose(file);
printf("\nNo account no:%d found",acc_no);




}