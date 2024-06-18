/*
For Division 1: 1900 ≤ rating
For Division 2: 1600 ≤ rating ≤ 1899
For Division 3: 1400 ≤ rating ≤ 1599
For Division 4: rating ≤ 1399
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    for(int test=1; test<=t; test++){
        int rating; cin>>rating;
        if(rating <= 1399){
            cout<<"Division 4"<<endl;
        }else if(rating >= 1400 && rating <= 1599){
            cout<<"Division 3"<<endl;
        }else if(rating >= 1600 and rating <= 1899){
            cout<<"Division 2"<<endl;
        }else{
            cout<<"Division 1"<<endl;
        }
    }
    return 0;
}