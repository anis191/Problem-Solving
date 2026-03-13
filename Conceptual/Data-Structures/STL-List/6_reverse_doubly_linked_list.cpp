#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* prev;
    Node* next;

    Node(int val) {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

void reverse_linked_list(Node *head, Node *tail){
    while(head != tail && head->next != tail){
        swap(head->val, tail->val);
        head = head->next;
        tail = tail->prev;
    }
    swap(head->val, tail->val);
    cout << "Head in rll(): " << head << endl;
}

void print(Node *head){
    while(head != NULL){
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
    return;
}

int main() {

    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node *tail = d;

    // forward connection
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    // backward connection
    a->prev = head;
    b->prev = a;
    c->prev = b;
    d->prev = c;

    reverse_linked_list(head, tail);
    print(head);
    cout << "Head in main(): " << head << endl;
}