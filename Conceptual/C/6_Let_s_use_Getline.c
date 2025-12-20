/*
Problem: Write a C program to print characters of a string until a backslash (\) is encountered.

Detailed Problem Description:
You are given:
1.A string S (up to 1,000,000 characters).
Your task is to:
1.Read the string using fgets.
2.Print each character of the string one by one until a backslash (\) is encountered.
3.Stop printing when the first backslash appears (do not print the backslash or anything after it).

=> Example:
Input: Hello\World
Output: Hello
*/

#include<stdio.h>
int main(){
    char str[1000001];
    fgets(str, 1000001, stdin);
    int i = 0;
    while (str[i] != '\\')
    {
        printf("%c",str[i]);
        i++;
    }
    return 0;
}