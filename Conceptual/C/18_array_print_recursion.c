#include<stdio.h>

void print_the_array(int *arr, int n, int i){
    if (i == n) return;
    
    printf("%d\n", arr[i]); //Here actually, arr[i] == *(arr + i)
    print_the_array(arr, n, i+1);
}

void take_the_array(int n){
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    print_the_array(arr, n, 0);
}

int main(){
    int n;
    scanf("%d", &n);
    take_the_array(n);
}