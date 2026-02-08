#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node *next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

int main(){
    Node a(10);
    Node b(19);

    a.next = &b;

    cout << "a: " << a.val << endl;
    cout << "b: " << a.next->val << endl;
}