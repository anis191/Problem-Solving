#include<stdio.h>

void print_n(int i, int n){
    if (i == n+1) return;
    printf("%d ", i);
    print_n(i+1,n);
}

int main(){
    int n;
    scanf("%d", &n);
    print_n(1,n);
}