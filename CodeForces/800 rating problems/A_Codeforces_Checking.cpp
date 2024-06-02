#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    for(int test=1; test<=t; test++){
        char c; cin>>c;
        //codeforces
        string a = "codeforces";
        int no = 0;
        for(char ch : a){
            if(ch == c){
                cout<<"YES"<<endl;
                no++;
                break;;
            }
        }
        if(no == 0){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}