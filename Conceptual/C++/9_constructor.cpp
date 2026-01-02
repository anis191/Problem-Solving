#include<iostream>
using namespace std;

class Student{
    public:
    int id;
    char result;
    Student(int id, char result){
        this-> id = id;
        this-> result = result;
    }
};

int main(){
    Student anis(2314, 'A');
    Student muhi(3212, 'C');

    cout << "Anis: " << anis.id << " " << anis.result << endl;
    cout << "Muhi: " << muhi.id << " " << muhi.result << endl;
}