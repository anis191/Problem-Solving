#include<stdio.h>
int main(){
    int a = 10;
    printf("a is: %d\n", a);
    printf("a address is: %p\n", &a);

    int * p = &a;
    printf("p is: %p\n", p);
    printf("p address -> value: %d\n", *p);

    *p = 20;
    printf("a is: %d\n", a);
}