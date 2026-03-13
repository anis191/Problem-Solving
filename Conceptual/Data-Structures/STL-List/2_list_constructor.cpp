#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int>myList1(5);
    cout << "size of myList1: " << myList1.size() << endl;
    
    list<int>myList2(5, 9);
    cout << "From myList2:" << endl;
    for(int i: myList2){
        cout << i << " ";
    }
    cout << endl;

    list<int>myList3(myList2);
    cout << "From myList3:" << endl;
    for(int i: myList3){
        cout << i << " ";
    }
    cout << endl; 

    string arr[3] = {"anis", "nur", "karim"};
    list<string>myList4(arr, arr+3);
    cout << "From myList4:" << endl;
    for(string str: myList4){
        cout << str << " ";
    }
    cout << endl;
}