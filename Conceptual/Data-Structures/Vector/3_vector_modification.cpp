#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {1,2,3,4};
    v.push_back(5);
    for(int i:v){cout << i << " ";}
    cout << endl;
    v.push_back(6);
    for(int i:v){cout << i << " ";}
    cout << endl;
    v.pop_back();
    v.pop_back();
    for(int i:v){cout << i << " ";}
    cout << endl;
    v.insert(v.begin()+2, 30);
    for(int i:v){cout << i << " ";}
    cout << endl;
    vector<int>tmp = {40, 50, 60};
    v.insert(v.begin()+3, tmp.begin(), tmp.end());
    for(int i:v){cout << i << " ";}
    cout << endl;

    v.erase(v.begin()+2, v.begin()+5);
    for(int i:v){cout << i << " ";}
    cout << endl;

    tmp = {1,2,3,4,2,1,1,1,5,3,2,2,1};
    for(int i:tmp){cout << i << " ";}
    cout << endl;
}