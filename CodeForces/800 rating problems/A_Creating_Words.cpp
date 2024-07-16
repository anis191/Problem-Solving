#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    for(int i=1; i<=t; i++){
        string a,b;
        cin>>a>>b;
        char tmp = a[0];
        a[0] = b[0];
        b[0] = tmp;
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}