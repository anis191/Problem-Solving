#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v = {1,2,3,4,5};
    cout << "size of v: " << v.size() << endl;
    cout << "max size of v: " << v.max_size() << endl;
    cout << "capacity of v: " << v.capacity() << endl;
    for(int i:v){cout << i << " ";}
    vector<int>copy_v(v);
    cout << endl;
    v.clear();
    for(int i:v){cout << i << " ";}
    cout << endl;
    for(int i:copy_v){cout << i << " ";}
    cout << endl;
    cout << "v: " << v.empty() << endl;
    cout << "copy_v: " << copy_v.empty() << endl;
}