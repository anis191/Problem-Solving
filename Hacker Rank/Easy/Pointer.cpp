#include<bits/stdc++.h>
using namespace std;
void sum_sub(int *a, int *b){
    int temp = *a;
    *a = *a + *b;
    *b = abs(temp - *b);
    return;
}
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    sum_sub(&a,&b);
    cout<<a<<"\n"<<b<<endl;
    return 0;
}