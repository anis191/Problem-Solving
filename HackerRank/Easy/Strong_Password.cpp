#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    int n; cin >> n;
    string s;
    s.resize(n);
    cin >> s;
    bool digit = false, lowercase = false, uppercase = false, special = false;
    int missing_type = 0, missing_length = 0;
    string special_characters = "!@#$%^&*()-+";
    string::iterator i;

    if (s.size() < 6)
    {
        missing_length = 6 - s.size();
    }

    for(char c: s){
        if (c >= 65 and c <= 90)
        {
            if(uppercase != true){uppercase = true;}
        }else if (c >= 97 and c <= 122)
        {
            if(lowercase != true){lowercase = true;}
        }else if (c >= 48 and c <= 57)
        {
            if(digit != true){digit = true;}
        }else{
            if (special != true)
            {
                for(i = special_characters.begin(); i < special_characters.end(); i++){
                    if(*i == c){special = true;}
                }
            }
            
        }
    }

    if(digit == false){missing_type ++;}
    if(uppercase == false){missing_type ++;}
    if(lowercase == false){missing_type ++;}
    if(special == false){missing_type ++;}

    cout << max(missing_length, missing_type);
}