#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int>myList1 = {1,2,3,3,4,3,5,3};
    // remove():
    myList1.remove(3);
    for(int i: myList1){
        cout << i << " ";
    }
    cout << endl;

    //sort():
    list<int>myList2 = {7,9,5,2,1};
    myList2.sort();
    for(int i: myList2){
        cout << i << " ";
    }
    cout << endl;

    myList2.sort(greater<int>());
    for(int i: myList2){
        cout << i << " ";
    }
    cout << endl;

    list<int>myList3 = {7,1,5,1,1};
    myList3.sort();
    myList3.unique();
    for(int i: myList3){
        cout << i << " ";
    }
    cout << endl;
}