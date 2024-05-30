#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    char a[n+1]; cin>>a;
    int b[26];
    for(int i=0; i<26; i++)
        b[i] = 0;
    if(n < 26){
        cout<<"NO";
    }else{
        for(char i:a){
            if(i >= 65 && i <= 90){
                i = i + 32;
            }
            b[i - 97]++;
        }
        int yes = 0;
    for(int i=0; i<26; i++){
        if(b[i] == 0){
            cout<<"NO";
            yes++;
            break;
        }
    }
    if(yes == 0){
        cout<<"YES";
    }
    }
    return 0;
}