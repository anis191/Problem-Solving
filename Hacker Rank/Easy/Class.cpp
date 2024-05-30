#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    int age;
    string first_name;
    string last_name;
    int level;
};
void first_part(Student a){
    cout<<a.age<<"\n"<<a.last_name<<", "<<a.first_name<<endl;
    cout<<a.level<<endl<<endl;    
}
void last_part(Student a){
    cout<<a.age<<","<<a.first_name<<",";
    cout<<a.last_name<<","<<a.level;
}
int main(){
    Student a;
    cin>>a.age>>a.first_name>>a.last_name>>a.level;
    first_part(a);
    last_part(a);
    return 0;
}