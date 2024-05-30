/*
"H" prints "Hello, World!",
"Q" prints the source code of the program itself,
"9" prints the lyrics of "99 Bottles of Beer" song,
"+" increments the value stored in the internal accumulator.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    string a; getline(cin,a);
    int no = 0;
    string::iterator i;
    for(i=a.begin(); i<a.end(); i++){
        if(*i == 'H' || *i == 'Q' || *i == '9'){
            cout<<"YES";
            no++;
            break;            
        }
    }
    if(no == 0){
        cout<<"NO";
    }
    return 0;
}