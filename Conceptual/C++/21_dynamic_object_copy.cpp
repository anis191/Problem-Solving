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
};

int main(){
    Persion *rakib = new Persion("Rakib", 24);
    Persion *sakib = new Persion("Sakib", 33);
    cout << rakib << " " << sakib << endl;
    *rakib = *sakib;
    cout << rakib->name << " " << sakib->name << endl;
}