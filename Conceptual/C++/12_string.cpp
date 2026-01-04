#include<iostream>
#include<string.h>
using namespace std;

int main(){
    string a = "Hello World!";
    cout << "a: " << a << endl;
    string n1 = "anis";
    string n2 = "muhi";
    n2 = "anis";
    if (n1 == n2)
    {
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    cout << "size of a: " << a.size() << endl;
    n2.clear();
    cout << "n2 after clear: " << n2 << endl;

    if (n1.empty() == true)
    {
        cout << "n1 is empty" << endl;
    }else{
        cout << "n1 is NOT empty" << endl;
    }

    if (n2.empty() == true)
    {
        cout << "n2 is empty" << endl;
    }else{
        cout << "n2 is NOT empty" << endl;
    }
    
    // String elements access:
    string name = "Anisul Alam";
    for (int i = 0; i < name.size(); i++)
    {
        cout << "name[" << i << "]" << " -> " << name.at(i) << endl;
    }

    cout << "the first char of name: " << name.front() << endl;
    cout << "the last char of name: " << name.back() << endl;
    
}