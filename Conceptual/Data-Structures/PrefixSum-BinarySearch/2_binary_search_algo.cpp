#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n, q; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a+n);
    int l = 0, r = (n-1);
    cin >> q;
    bool flag = false;
    while (l <= r)
    {
        // int mid = (l + r) / 2;
        int mid = l + (r - l) / 2;
        if(a[mid] == q){
            cout << q  << " - Is found!" << endl;
            flag = true;
            break;
        }else if (a[mid] < q)
        {
            l = mid + 1;
        }else{
            r = mid - 1;
        }
        
    }

    if(flag == false){
        cout << "NOT Found." << endl;
    }
    
}