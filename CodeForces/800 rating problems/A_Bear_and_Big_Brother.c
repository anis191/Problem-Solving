#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a <= b){
        int year=0;
        while(a<=b){
            a = a*3;
            b = b*2;
            year++;
        }
        printf("%d",year);
        return 0;
    }
}