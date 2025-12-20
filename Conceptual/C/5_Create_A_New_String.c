// Write a C program to read two strings and print their lengths and values.

#include<stdio.h>
#include<string.h>
int main(){
    char S[1000];
    char T[1000];
    gets(S);
    gets(T);
    int ls = strlen(S);
    int lt = strlen(T);
    printf("%d %d\n",ls, lt);
    printf("%s %s", S, T);
    return 0;
}