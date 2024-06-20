/*
1.password should consist only of lowercase Latin letters and digits;
2.there should be no digit that comes after a letter (so, after each letter, there is either another letter or the string ends);
3.all digits should be sorted in the non-decreasing order;
4.all letters should be sorted in the non-decreasing order.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    for(int test=1; test<=t; test++){
        int n; cin>>n;
        char a[n+1];
        for(int i=0; i<n; i++)
            cin>>a[i];
        bool yes = true;
        for(int i=0; i<n; i++){
            if((a[i]>=48 && a[i]<=57) || (a[i]>=97 && a[i]<=122)){
                if(i == 0){
                    continue;
                }else if(a[i]>=47 && a[i]<=57){
                    if(a[i-1]>=47 && a[i-1]<=57){
                        if(a[i] >= a[i-1]){
                            continue;
                        }else{
                            cout<<"NO"<<endl;
                            yes = false;
                            break;
                        }
                    }else{
                        cout<<"NO"<<endl;
                        yes = false;
                        break;
                    }
                }else{
                    if(a[i] >= a[i-1]){
                        continue;
                    }else{
                        cout<<"NO"<<endl;
                        yes = false;
                        break;
                    }
                }
            }else{
                cout<<"NO"<<endl;
                yes = false;
                break;
            }
        }
        if(yes == true)
            cout<<"YES"<<endl;
    }
    return 0;
}