// Write a C program to calculate the sum of digits in a string of numbers.

#include<stdio.h>
#include<string.h>
int main(){
    char str[1000001];
    fgets(str, 1000001, stdin);
    int sum = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        sum += str[i] - '0';
    }
    printf("Sum %d", sum);
    return 0;
}