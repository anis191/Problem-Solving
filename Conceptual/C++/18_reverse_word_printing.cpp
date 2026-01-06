#include<iostream>
#include<string>
#include<sstream>
using namespace std;

void reverse_print(stringstream &ss){
    string temp;
    while (ss >> temp)
    {
        reverse_print(ss);
        cout << temp << endl;
    }
    
}

int main(){
    string text;
    getline(cin, text);

    stringstream ss(text);
    reverse_print(ss);
}