#include<iostream>
#include<string>
#include<cfloat>
using namespace std;

class Student{
    public:
    string name;
    int id;
    float gpa;
};

int main(){
    int n;
    cin >> n;
    cin.ignore();

    Student s[n];

    for (int i = 0; i < n; i++)
    {
        cin >> s[i].name >> s[i].id >> s[i].gpa;
    }

    Student mx, mn;
    mx.gpa = FLT_MIN;
    mn.gpa = FLT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (s[i].gpa > mx.gpa)
        {
            mx = s[i];
        }
        if (s[i].gpa < mn.gpa)
        {
            mn = s[i];
        }
    }

    cout << "Max: " << endl << mx.name << " " << mx.id << " " << mx.gpa << endl;
    cout << "Min: " << endl << mn.name << " " << mn.id << " " << mn.gpa << endl;
}