#include<iostream>
using namespace std;

int main(){
    int *a = new int[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    
    int *b = new int[3];
    for (int i = 0; i < 3; i++)
    {
        b[i] = a[i];
    }
    delete[] a;

    a = new int[10];

    for (int i = 0; i < 3; i++)
    {
        a[i] = b[i];
    }
    delete[] b;

    a[3] = 101;

    for (int i = 0; i < 4; i++)
    {
        cout << a[i] << " ";
    }
}