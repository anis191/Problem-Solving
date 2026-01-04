#include<iostream>
#include<string>
using namespace std;

int main(){
    string h = "Hello ";
    string w = "World";
    cout << "h + w = " << h+w << endl;

    h.append(w);
    cout << "h: " << h << endl;

    string name = "Anis";
    name.push_back('u');
    name.push_back('l');
    cout << "name: " << name << endl;
    name.pop_back();
    cout << "name: " << name << endl;

    h.erase(5, 2);
    cout << "h: " << h << endl;

    h = "Hello World";
    cout << "h: " << h << endl;

    h.replace(6, 5, "anisu");
    cout << "h: " << h << endl;

    string str = "I am anis";
    cout << "str: " << str << endl;

    str.insert(4, " md");
    cout << "str: " << str << endl;
}