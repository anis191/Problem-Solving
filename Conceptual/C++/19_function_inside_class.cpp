#include<iostream>
#include<string>
using namespace std;

class Person{
    public:
    string name;
    int age;
    Person(string name, int age){
        this-> name = name;
        this->age = age;
    }
    void hello(){
        cout << "Hello World" << endl;
    }
};

int main(){
    Person anis("Anisul Alam", 24);
    anis.hello();
}