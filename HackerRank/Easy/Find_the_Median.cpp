#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a+n);
    int median = int(n/2);
    cout << a[median];
}