#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    for(int test=1; test<=t; test++){
        vector<int>v;
        for(int i=1; i<=4; i++){
            int x; cin>>x;
            v.push_back(x);
        }
        int count = 0;
        for(int i=1; i<=3; i++){
            if(v[0] < v[i]){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}