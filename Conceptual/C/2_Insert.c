// Write a C program that inserts an element at a specific position in an array.

#include<stdio.h>
int main(){
    int n;
    int position, value;
    scanf("%d",&n);
    int a[n+1];
    for (int i = 0; i < n ; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d %d",&position, &value);
    for (int i = n; i >= position - 1; i--)
    {
        a[i] = a[i-1];
    }
    a[position-1] = value;
    for (int i = 0; i <= n; i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}