#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    for(int test=1; test<=t; test++){
        int n; cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        int ans = 0;
        int i=0;
        int j=1;
        while(i < (n-1)){
            if(a[i] != a[j]){
                if((i+2) == n){
                    if(a[i-1] == a[i]){
                        ans = j+1;
                        break;
                    }else{
                        ans = i+1;
                        break;
                    }
                }
                else{
                    if(a[i+2] == a[i]){
                    ans = j+1;
                    break; 
                }else{
                    ans = i+1;
                    break;
                }
            }
            }else{
                i++; j++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}