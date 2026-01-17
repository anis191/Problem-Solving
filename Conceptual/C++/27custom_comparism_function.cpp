#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

class Students{
    public:
    int id;
    string name;
    int mark;
};

bool cmp_asending(Students a, Students b){
    if (a.mark < b.mark)
    {
        return true;
    }else{
        return false;
    }
}

bool cmp_desending(Students a, Students b){
    return a.mark > b.mark;
}

int main(){
    int n;
    cin >> n;
    cin.ignore();

    Students s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i].id >> s[i].name >> s[i].mark;
    }

    sort(s, s+n, cmp_desending);
    
    for (int i = 0; i < n; i++)
    {
        cout << s[i].id << " " << s[i].name << " " << s[i].mark << endl;
    }
}