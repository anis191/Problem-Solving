#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

class Count_char{
    public:
    char value;
    int counting;
};

bool cmp(Count_char a, Count_char b){
    return a.counting > b.counting;
}

int main(){
    string str;
    getline(cin, str);

    Count_char ch[26];
    for (int i = 0; i < 26; i++)
    {
        ch[i].value = char(i+97);
        ch[i].counting = 0;
    }
    
    for(char i: str){
        if(i >= 65 && i <= 90){
            i = i + 32;
        }

        ch[int(i-97)].counting ++;
    }

    sort(ch, ch+26, cmp);

    for (int i = 0; i < 26; i++)
    {
        if(ch[i].counting != 0){
        cout << ch[i].value << " - " << ch[i].counting << endl;}
    }
    
}