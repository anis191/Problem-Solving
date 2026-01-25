#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int>v={1,2,3,4,5,6,7,8,9};
    vector<int>::iterator i;
    i = find(v.begin(), v.end(), 3);
    if(i == v.end()){
        cout << "Not found!" << endl;
    }else{
        cout << "Found." << endl;
        cout << *i;
    }
}