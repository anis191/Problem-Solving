#include<stdio.h>
#include<string.h>
int main(){
    char a[101];
    scanf("%s",a);
    int b[101];
    int count=0;
    for(int i=0; i<strlen(a); i++){
        if(a[i] >= 49 && a[i] <= 51){
            b[count] = a[i] - '0';
            count++;
        }
    }
    // int k = sizeof(b)/sizeof(int);
    int temp = 0;
    for(int i=0; i<count-1; i++){
        for(int j=i+1; j<count; j++){
            if(b[i] > b[j]){
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
    for(int i=0; i<count; i++){
        if(i < count-1){
        printf("%d+",b[i]);
        }else{
            printf("%d",b[i]);
        }
    }
    return 0;
}