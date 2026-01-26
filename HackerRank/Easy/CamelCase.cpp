#include<iostream>
#include<string>
using namespace std;

int main(){
    string s; cin >> s;
    int total = 1;

    for(char c: s){
        if(c >= 65 and c <= 90){
            total ++;
        }
    }

    cout << total;
}