#include<bits/stdc++.h>
using namespace std;
int main(){
    string str; cin>>str;
    stringstream ss(str);
    string i;
    while(getline(ss, i, ',')){
        int num = std::stoi(i);
        cout<<num<<endl;
    }
    return 0;
}