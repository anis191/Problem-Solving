#include<stdio.h>
#include<string.h>

void pass_str(char str[]){
    printf("Inside pass_str:\n");
    printf("str is: %s\n", str);
    for (int i = 0; i < strlen(str); i++)
    {
        printf("str[%d] = %c\n", i, str[i]);
    }
}

int main(){
    char str[] = "Hello World";
    printf("str is: %s\n", str);
    for (int i = 0; i < strlen(str); i++)
    {
        printf("str[%d] = %c\n", i, str[i]);
    }
    pass_str(str);
}