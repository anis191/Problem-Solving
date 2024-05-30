#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    for(int i=1; i<=t; i++){
    long long int a; int b;
    cin>>a>>b;
    int count=0;
    if(a % b == 0){
        cout<<0<<endl;
    }else{
        while(a % b != 0){
            a++;
            count++;
            if(a % b == 0){
                cout<<count<<endl;
                break;
            }
        }
    }
    }
    return 0;
}