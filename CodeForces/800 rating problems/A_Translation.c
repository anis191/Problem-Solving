//word s from Berlandish into Birlandish as t
#include<stdio.h>
#include<string.h>
int main(){
    char s[101],t[101],re_s[101];
    scanf("%s %s",s,t);
    int j =0;
    for(int i=strlen(s)-1; i>=0; i--){
        re_s[j] = s[i];
        j++;
    }
    re_s[j] = s[strlen(s)];
    if(strcmp(re_s,t) == 0){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}