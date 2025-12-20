#include<stdio.h>

void pass_array(int *arr, int n){
    printf("Inside pass_array function\n");
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] is: %d\n", i, arr[i]);
    }
}

int main(){
    int a[5] = {11,22,33,44,55};
    for (int i = 0; i < 5; i++)
    {
        printf("a[%d] is: %d\n", i, a[i]);
    }
    pass_array(a,5);
}