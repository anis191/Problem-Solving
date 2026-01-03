#include<iostream>
using namespace std;

class Student{
    public:
    int id;
    float gpa;
    Student(int id, float gpa){
        this-> id = id;
        this-> gpa = gpa;
    }
};

Student return_obj(){
    Student std1(2314, 3.01);
    return std1;
}

int main(){
    Student anis = return_obj();
    cout << "Id: " << anis.id << endl << "Gpa: " << anis.gpa << endl;
}