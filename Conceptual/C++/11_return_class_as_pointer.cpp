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

Student * return_obj(){
    Student * student = new Student (2006, 3.00);
    return student;
}

int main(){
    Student * anis = return_obj();
    cout << "Id: " << anis->id << endl << "Gpa: " << anis->gpa << endl;
    delete anis;
}