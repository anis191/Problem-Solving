#include<stdio.h>
int main(){
    int n,anton=0,danik=0;
    scanf("%d",&n);
    char a[n+1];
    scanf("%s",a);
    for(int i=0; i<n; i++){
        if(a[i] == 'A'){
            anton++;
        }else{
            danik++;
        }
    }
    if(anton > danik){
        printf("Anton");
    }else if(danik > anton){
        printf("Danik");
    }else{
        printf("Friendship");
    }
    return 0;
}