#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q; cin>>n>>q;
    vector<int>arr[n];
    for(int i=0; i<n; i++){
        int k; cin>>k;
        for(int j=0; j<k; j++){
            int val; cin>>val;
            arr[i].push_back(val);
        }
    }
    while(q--){
        int i,j; cin>>i>>j;
        cout<<arr[i][j]<<endl;
    }
    return 0;
}