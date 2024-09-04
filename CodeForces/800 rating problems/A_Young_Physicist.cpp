#include<bits/stdc++.h>
using namespace std;
int main(){
    int r; cin>>r;
    int arr[r][3];
    for(int i=0; i<r; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }
    vector<int>v;
    int sum,j=0;
    for(int c=0; c<3; c++){
        sum = 0;
        for(int i=0; i<r; i++){
            sum += arr[i][j];
        }
        v.push_back(sum);
        j++;
    }
    sum = 0;
    for(int i : v)
        sum += i;
    if(sum == 0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}