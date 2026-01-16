#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
    int id;
    string name;
    int mark;
};

int main(){
    int n;
    cin >> n;
    cin.ignore();

    Student s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i].id >> s[i].name >> s[i].mark;
    }

    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (s[i].mark > s[j].mark)
            {
                swap(s[i], s[j]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Id: " << s[i].id << ", " << s[i].name << ", " << s[i].mark << endl;
    }
    
}