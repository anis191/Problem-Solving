#include<stdio.h>
int main(){
    int x = 10;
    printf("The value of x is: %d\n", x);

    int * ptr;
    ptr = &x;
    printf("The memory address of x is: %p", ptr);
}