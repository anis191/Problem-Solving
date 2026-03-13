#include <iostream>

using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void reverse_linked_list(Node *&head, Node *curr){
    if(curr->next == NULL){
        head = curr;
        return;
    }
    reverse_linked_list(head, curr->next);
    curr->next->next = curr;
    curr->next = NULL;
    return;
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
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    reverse_linked_list(head, head);
    print(head);
}