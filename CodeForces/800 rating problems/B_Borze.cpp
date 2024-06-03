#include<bits/stdc++.h>
using namespace std;
int main(){
    string a; cin>>a;
    for(int i=0; i<a.size(); i++){
        if(a.at(i) == '.'){
            cout<<0;
        }else{
            if(a.at(i+1) == '.'){
                cout<<1;
                i++;
            }else{
                cout<<2;
                i++;
            }
        }
    }
    return 0;
}