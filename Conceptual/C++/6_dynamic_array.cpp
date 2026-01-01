#include<iostream>
using namespace std;

int * return_array(int n){
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    return arr;
}

int main(){
    int n;
    cin >> n;
    int *arr = return_array(n);

    cout << "In main function" << endl;
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    delete[] arr;
}