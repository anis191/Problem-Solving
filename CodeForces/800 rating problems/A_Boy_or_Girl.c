#include<stdio.h>
#include<string.h>
int func(char *a){
    int count[26];
    for(int i=0; i<26; i++){
        count[i] = 0;
    }
    for(int i=0; i<strlen(a); i++){
        count[a[i] - 97]++;
    }
    int checker = 0;
    for(int i=0; i<26; i++){
        if(count[i] != 0){
            checker++;
        }
    }
    return checker;
}
int main(){
    char a[101];
    scanf("%s",a);
    int checker = func(a);
    if(checker % 2 == 0){
        printf("CHAT WITH HER!");
    }else{
        printf("IGNORE HIM!");
    }
    return 0;
}