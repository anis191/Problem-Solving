#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    int n,q; cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ps[n];
    ps[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        ps[i] = a[i] + ps[i-1];
    }
    while (q--)
    {
        int l,r; cin >> l >> r;
        l--; r--;
        int sum = 0;
        if(l == 0){
            sum = ps[r];
        }else{
            sum = ps[r] - ps[l-1];
        }

        cout << sum << endl;
    }
}