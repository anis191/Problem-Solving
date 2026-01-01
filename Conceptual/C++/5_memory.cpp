#include<iostream>
using namespace std;

int main(){
    int *a = new int;
    cin >> *a;
    cout << "address: "<< a <<endl;
    cout << "value: "<< *a <<endl;
    delete a;
    cout << "address: "<< a <<endl;
    cout << "value: "<< *a <<endl;

}