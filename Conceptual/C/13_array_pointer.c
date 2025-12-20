#include<stdio.h>
int main(){
    int a[5] = {10,20,30,40,50};
    int size = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < size ; i++)
    {
        printf("address of %d is %p\n", *(a+i), a+i);
    }
}