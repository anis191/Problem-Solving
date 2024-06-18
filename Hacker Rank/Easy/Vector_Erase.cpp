#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin>>v[i];
    int index; cin>>index;
    index--;
    v.erase(v.begin()+index);
    int l,r; cin>>l>>r;
    l--; r--;
    v.erase(v.begin()+l, v.begin()+r);
    cout<<v.size()<<endl;
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
    return 0;
}