#include<stdio.h>
int function(int n, int k){
    int r=0;
    for(int i=1; i<=k; i++){
        r = n % 10;
        if(r == 0){
            n = n/10;
        }else{
            n--;
        }
    }
    return n;
}
int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int ans = function(n,k);
    printf("%d",ans);
    return 0;
}