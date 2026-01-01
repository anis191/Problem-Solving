#include<stdio.h>
#include<string.h>
int main(){
    char s[1001];
    fgets(s,1001,stdin);
    int length = strlen(s);
    for(int i=0; i<length; i++){
        if(s[i] == ' '){
            printf("\n");
            continue;
        }
        printf("%c",s[i]);
    }
    return 0;
}