#include<stdio.h>// recursion:- when a function itself, it 's called recursion.
// print "Helloworld" five times. 
void Helloworld(int count );
int main() {
    Helloworld(5);
    return 0;

}
void Helloworld(int count) {
    if (count==0){
        return;
    }
    printf(" Hello world \n");
    Helloworld(count-1);
}