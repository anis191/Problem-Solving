#include<iostream>
#include<string>
using namespace std;

namespace sakib{
    string name = "Sakib";
    int age = 25;    
}

namespace rakib{
    string name = "Rakib";
    int age = 33;    
}

int main(){
    cout << "Sakib: " << endl;
    cout << sakib::name << " " << sakib::age << endl;
    cout << "Rakib: " << endl;
    cout << rakib::name << " " << rakib::age << endl;
}