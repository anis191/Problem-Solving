#include<iostream>
using namespace std;

class Student{
    public:
    char name[20];
    int roll;
    float gpa;
};

int main(){
    Student anis, muhi;
    cin >> anis.name >> anis.roll >> anis.gpa;
    cin >> muhi.name >> muhi.roll >> muhi.gpa;

    cout << "Anis Info: " << endl;
    cout << anis.name << " " << anis.roll << " " << anis.gpa << endl;
    cout << "Muhi Info: " << endl;
    cout << muhi.name << " " << muhi.roll << " " << muhi.gpa << endl;
}