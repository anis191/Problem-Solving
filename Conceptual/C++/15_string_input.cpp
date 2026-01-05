#include<iostream>
#include<string>
using namespace std;

int main(){
    string a, b;
    cin >> a;
    cout << a << endl;

    cin.ignore();
    getline(cin, b);
    cout << b << endl;
}