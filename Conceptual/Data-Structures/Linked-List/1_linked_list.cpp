#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node *next;
};

int main(){
    Node a,b;

    a.val = 10;
    b.val = 30;

    a.next = &b;
    b.next = NULL;

    cout << "a: " << a.val << endl;
    cout << "b: " << a.next->val << endl;
}