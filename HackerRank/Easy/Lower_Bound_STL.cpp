#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)
        cin>>a[i];
    int query; cin>>query;
    while(query--){
        int x; cin>>x;
        int l=0,r=(n-1);
        bool x_1st_found_check = false;
        int x_1st_found_check_false;
        while(l<=r){
            int mid = (l+r)/2;
            x_1st_found_check_false = mid;
            if(a[mid] == x){
                x_1st_found_check = true;
                int x_1st_found = mid;
                vector<int> b(a);
                b.erase(b.begin()+mid);
                l=0, r=b.size()-1;
                bool x_2nd_found = false;
                while(l<=r){
                    mid = (l+r)/2;
                    if(b[mid] == x){
                        x_2nd_found = true;
                        break;
                    }else if(x>b[mid]){
                        l = mid + 1;
                    }else{
                        r = mid -1;
                    }
                }
                if(x_2nd_found == true){
                    cout<<"Yes "<<x_1st_found+1<<endl;
                    break;
                }
                else{
                    cout<<"No "<<mid+1<<endl;
                    break;
                }
            }else if(x>a[mid]){
                l = mid + 1;
            }else{
                r = mid - 1;
            }
        }
        if(x_1st_found_check == false)
            cout<<"No "<<x_1st_found_check_false+1<<endl;
    }
    return 0;
}