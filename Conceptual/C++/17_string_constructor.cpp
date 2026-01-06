#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string a("Hello world");
    cout << "a: " << a << endl;
    string b("Hello world", 7);
    cout << "b: " << b << endl;
    string c(5, 'c');
    cout << "c: " << c << endl;

    string d = "fdcazbv";
    sort(d.begin(), d.end());
    cout << "d: " << d << endl;

    string e = "I am anis";
    for (char i: e)
    {
        cout << i;
    }
}