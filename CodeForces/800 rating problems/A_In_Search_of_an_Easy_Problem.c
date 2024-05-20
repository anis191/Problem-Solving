#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    int one = 0;
    for(int i=0; i<n; i++){
        if(a[i] == 1){
            one++;
        }
    }
    if(one != 0){
        printf("HARD");
    }else{
        printf("EASY");
    }
    return 0;
}