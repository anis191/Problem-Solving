#include<stdio.h>

void pass_value(int a){
    printf("a is: %d\n", a);
    printf("a address: %p\n", &a);
    a = 20;
    printf("a is after update: %d\n", a);
}

int main(){
    int a = 10;
    printf("a is: %d\n", a);
    printf("a address: %p\n", &a);
    pass_value(a);
    printf("a is after update: %d\n", a);
}