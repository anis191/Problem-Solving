#include<stdio.h>
#include<string.h>
void to_upper(char *a);
void to_lower(char *a);
int main(){
    char a[101];
    scanf("%s",a);
    int upper=0,lower=0;
    for(int i=0; i<strlen(a); i++){
        if(a[i]>=65 && a[i]<= 90){
            upper++;
        }else{
            lower++;
        }
    }
    if(upper > lower){
        to_upper(a);
    }else{
        to_lower(a);
    }
}
void to_upper(char *a){
    for(int i=0; i<strlen(a); i++){
        if(a[i]>=97 && a[i]<=122){
            a[i] = a[i] -32;
        }
    }
    printf("%s",a);
    return;
}
void to_lower(char *a){
    for(int i=0; i<strlen(a); i++){
        if(a[i]>=65 && a[i]<=90){
            a[i] = a[i] + 32;
        }
    }
    printf("%s",a);
    return;
}