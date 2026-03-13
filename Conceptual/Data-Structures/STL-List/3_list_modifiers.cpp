#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main(){
    list<int>myList1 = {10,20,30,40,50};
    list<int>newList1;
    // newList1 = myList1;
    newList1.assign(myList1.begin(), myList1.end());
    for(int i: newList1){
        cout << i << " ";
    }
    cout << endl;

    //push back:
    myList1.push_back(60);
    for(int i: myList1){
        cout << i << " ";
    }
    cout << endl;

    myList1.push_front(99);
    for(int i: myList1){
        cout << i << " ";
    }
    cout << endl;

    myList1.pop_back();
    myList1.pop_front();
    for(int i: myList1){
        cout << i << " ";
    }
    cout << endl;

    //insert():
    myList1.insert(next(myList1.begin(), 2), 29);
    for(int i: myList1){
        cout << i << " ";
    }
    cout << endl;

    //erase():
    myList1.erase(next(myList1.begin(), 3));
    for(int i: myList1){
        cout << i << " ";
    }
    cout << endl;

    //insert and erase multiple values:
    myList1.insert(next(myList1.begin(), 2), {26, 27, 28});
    for(int i: myList1){
        cout << i << " ";
    }
    cout << endl;

    list<int>a = {1,2,5};
    list<int>b = {3,4};
    a.insert(next(a.begin(), 2), b.begin(), b.end());
    for(int i: a){
        cout << i << " ";
    }
    cout << endl;

    myList1.erase(next(myList1.begin(), 2), next(myList1.begin(), 6));
    for(int i: myList1){
        cout << i << " ";
    }
    cout << endl;

    auto i = find(myList1.begin(), myList1.end(), 50);
    if(i == myList1.end()){
        cout << "Not found" << endl;
    }else{
        cout << "Found" << endl;
    }
}