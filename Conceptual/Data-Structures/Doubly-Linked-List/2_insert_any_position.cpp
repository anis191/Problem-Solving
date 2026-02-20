#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node *prev;
    Node *next;
    Node(int val){
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

void print_normal(Node *head){
    Node *tmp = head;
    while(tmp != NULL){
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_reverse(Node *tail){
    Node *tmp = tail;
    while(tmp != NULL){
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

void insert_at_position(Node *&head, int pos, int val){
    Node *newNode = new Node(val);
    Node *tmp = head;
    for(int i = 1; i <= pos-1; i++){ //Index based position
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = tmp;
}

int main(){
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = c;

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;

    cout << "Print Normal: " << endl;
    print_normal(head);
    cout << "Print Reverse: " << endl;
    print_reverse(tail);

    int pos, val;
    cin >> pos >> val;
    insert_at_position(head, pos, val);
    cout << "Print Normal: " << endl;
    print_normal(head);
}