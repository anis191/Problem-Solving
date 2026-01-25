#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int>v1;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        v1.push_back(x);
    }

    for(int i=0; i<n; i++){
        cout << v1.at(i) << " ";
    }
    cout << endl;
}