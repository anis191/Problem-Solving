#include<stdio.h>
int main(){
    int n,k,next=0;
    scanf("%d %d",&n,&k);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++){
        if(a[i] > 0 && a[i] >= a[k-1]){
            next++;
        }
    }
    printf("%d",next);
    return 0;
}