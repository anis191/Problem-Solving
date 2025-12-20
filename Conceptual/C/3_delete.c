// Write a C program to delete an element from an array at a given position.

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int position;
    scanf("%d",&position);
    if (position < 1 || position > n)
    {
        printf("Wrong position");
        return 0;
    }
    
    for (int i = position; i < n; i++)
    {
        a[i-1] = a[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}