#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> n;
    cout << "size of n: " << n.size() << endl;
    vector<int> a(5);
    cout << "size of a: " << a.size() << endl;
    vector<int>b(4, 10);
    cout << "size of b: " << b.size() << endl;
    for(int i: b){cout << i << " ";}
    cout << endl;
    vector<char>c = {'a', 'b', 'c', 'z'};
    vector<char>copy_c(c);
    for(char i: copy_c){cout << i << " ";}
    cout << endl;
    int arr[5] = {1,2,3,4,5};
    vector<int>copy_arr(arr, arr+5);
    for(int i: copy_arr){cout << i << " ";}
    cout << endl;
}