#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    int first;
    int second;
    int thard;
    int fourth;
    int fifth;
};
int main(){
    int n; cin>>n;
    int K_total;
    Student a[n];
    for(int i=0; i<n; i++){
        cin>>a[i].first>>a[i].second>>a[i].thard>>a[i].fourth>>a[i].fifth;
    }
    int count = 0;
    K_total = a[0].first+a[0].second+a[0].thard+a[0].fourth+a[0].fifth;
    for(int i=1; i<n; i++){
        int temp = a[i].first+a[i].second+a[i].thard+a[i].fourth+a[i].fifth;
        if(temp > K_total){
            count++;
        }
    }
    cout<<count;
    return 0;
}