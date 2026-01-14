#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
    int id;
    string name;
    int marks;
};

int main(){
    int n;
    cin >> n;
    int sum = 0, highest;

    Student students[n];
    
    for (int i = 0; i < n; i++)
    {
        cin >> students[i].id >> students[i].name >> students[i].marks;
    }

    highest = students[0].marks;

    for (int i = 0; i < n; i++)
        {
        if (students[i].marks > 80)
            {
                cout << students[i].name << "-" << students[i].marks << endl;
            }

            sum += students[i].marks;
            if (students[i].marks > highest)
            {
                highest = students[i].marks;
            }
            
        }

        cout << "average: " << (float)sum / n << endl;
        cout << "highest: " << highest << endl;
}