// #include<stdio.h>
// int main(){
//     long long int n,f=0;
//     scanf("%lld",&n);
//     for(int i=1; i<=n; i++){
//         if(i % 2 == 0){
//             f += i;
//         }else{
//             f -= i;
//         }
//     }
//     printf("%lld",f);
//     return 0;
// }
#include<stdio.h>
int func(long long int n,long long int f,long long int i){
    if(i > n) return f;
    if(i % 2 == 0){
        f += i;
    }else{
        f -= i;
    }
    func(n,f,i+1);
}
int main(){
    long long int n;
    scanf("%lld",&n);
    long long int f = func(n,0,1);
    printf("%lld",f);
}