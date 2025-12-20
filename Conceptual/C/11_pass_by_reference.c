#include<stdio.h>

void pass_reference(int * a){
    printf("a is: %p\n", a);
    printf("a address: %p\n", &a);
    *a = 20;
    printf("a is after update: %d\n", *a);
}

int main(){
    int a = 10;
    printf("a is: %d\n", a);
    printf("a address: %p\n", &a);
    pass_reference(&a);
    printf("a is after update: %d\n", a);
}