#include<stdio.h>
#include<math.h>
void func(int *a,int *b){
    int temp=*a;
    *a = *a + *b;
    *b = abs(temp - *b);
    printf("%d\n%d",*a,*b);
    return;
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    func(&a,&b);
    return 0;
}