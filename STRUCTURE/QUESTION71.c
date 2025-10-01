# include<stdio.h>

typedef struct BankAccount{
    int accountNo;
    char name[100];
}acc;


int main(){ 

    acc account1 = {145 , "parth"};
    acc account2 = {456 , "harsh"};
    printf("account no is : %d\n", account1.accountNo);
    printf("name of the holder is :%s", account1.name);

}