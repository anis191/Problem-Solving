#include<iostream>
#include<string>
using namespace std;

class Persion{
    public:
    string name;
    int age;
    Persion(string name, int age){
        this-> name = name;
        this-> age = age;
    }
    void printData(){
        cout << "name: " << name << endl << "age: " << age << endl;
    }
};

int main(){
    Persion anis("Anisul Alam", 24);
    Persion * khan = new Persion("O. Khan", 55);
    anis.printData();
    khan->printData();
}