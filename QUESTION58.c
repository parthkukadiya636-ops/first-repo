# include<stdio.h>// print the tables using function and array.


void storetables(int tables[][10], int n, int m, int number);


int main() {

    int tables[2][10];
    storetables(tables , 0, 10, 2);
     storetables(tables , 1, 10, 3);
    return 0;
}

void storetables(int tables[][10], int n, int m, int number){
    for(int i=1 ; i<m ; i++){
        tables[n][i] = number * i; 


        printf("%d \t", tables[n][i]);
    }
}