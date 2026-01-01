#include<bits/stdc++.h>
using namespace std;
int main(){
    //Input consists of the following space-separated values: int, long, char, float, and double, respectively.
    int i;
    long long int l;
    char c;
    float f;
    double d;
    cin>>i>>l>>c>>f>>d;
    //floating point value should be correct up to 3 decimal places.
    //double to 9 decimal places.
    cout<<i<<"\n"<<l<<"\n"<<c<<endl;
    cout<<fixed<<setprecision(3)<<f<<endl;
    cout<<fixed<<setprecision(9)<<d<<endl;
    return 0;
}