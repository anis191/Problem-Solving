#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    for(int i=1; i<=t; i++){
        string s; cin>>s;
        int j=0;
        for(char i : s){
            if(i>=97 && i<=122){
                s[j] = s[j] - 32;
            }
            j++;
        }
        if(s == "YES"){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}