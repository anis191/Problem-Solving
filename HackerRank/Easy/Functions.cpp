#include<bits/stdc++.h>
using namespace std;
int max_of_four(int a,int b,int c,int d){
    int mx = max({a,b,c,d});
    return mx;
}
int main(){
    int a,b,c,d;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    int mx = max_of_four(a,b,c,d);
    cout<<mx;
    return 0;
}