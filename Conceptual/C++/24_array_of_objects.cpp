#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
    string name;
    int age;
};

int main(){
    int n;
    cin >> n;
    Student a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].age;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].age << endl;
    }
    
}