#include<iostream>
using namespace std;

void fun(int *&ptr){
    cout << "Inside fun: " << ptr << " - " << *ptr << endl;
    ptr = NULL;
}

int main(){
    int val = 10;
    int *ptr = &val;
    fun(ptr);
    cout << "Inside main: " << ptr << endl;
}