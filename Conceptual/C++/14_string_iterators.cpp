#include<iostream>
#include<string>
using namespace std;

int main(){
    string text = "Hello World";
    cout << *text.begin() << endl;
    cout << *(text.end()-1) << endl;

    cout << text << endl;

    string::iterator i;
    for (i = text.begin(); i < text.end(); i++)
    {
        cout << *i ;
    }
    
}