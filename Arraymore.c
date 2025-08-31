# include<stdio.h>
int main() {
    int age =22;
    int _age= 23;
    int *ptr= &age;
    int *_ptr = &_age;
    printf("difference between both is : %u \n", ptr - _ptr);
    _ptr= &age;
    printf("comparison between both is : %d",  ptr == _ptr);
    return 0;
}

