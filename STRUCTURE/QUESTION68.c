# include<stdio.h>

struct address{
    int houseNo;
    int block;
    char city[100];
    char state[100];
};



void printadds(struct address add);

int main(){
    struct address add[4];
    printf("enter the info of person 1:");
    scanf("%d", &add[0].houseNo);
    scanf("%d", &add[0].block);
    scanf("%s", add[0].city);
    scanf("%s", add[0].state);


    printf("enter the info of person 2:");
    scanf("%d", &add[1].houseNo);
    scanf("%d", &add[1].block);
    scanf("%s", add[1].city);
    scanf("%s", add[1].state);


    printf("enter the info of person 3:");
    scanf("%d", &add[2].houseNo);
    scanf("%d", &add[2].block);
    scanf("%s", add[2].city);
    scanf("%s", add[2].state);


    printf("enter the info of person 4:");
    scanf("%d", &add[3].houseNo);
    scanf("%d", &add[3].block);
    scanf("%s", add[3].city);
    scanf("%s", add[3].state);

    printf("enter the info of person 5:");
    scanf("%d", &add[4].houseNo);
    scanf("%d", &add[4].block);
    scanf("%s", add[4].city);
    scanf("%s", add[4].state);

    printadds(add[0]);
    printadds(add[1]);
    printadds(add[2]);
    printadds(add[3]);
    printadds(add[4]);



    return 0;
}


void printadds(struct address add){
    printf("address is: %d , %d , %s , %s\n", add.houseNo , add.block, add.city, add.state);
}