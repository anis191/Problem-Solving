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

void insert_at_tail(Node *&head, Node *&tail, int value){
    Node *newNode = new Node(value);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
    return;
}

void print_linked_list(Node *head){
    cout<<"Your Linked List is: ";
    Node *temp = head;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
    return;
}

void sort_singly_linked_list(Node *&head){
    if(head == NULL){return;}
    for(Node *i = head; i->next != NULL; i = i->next){
        for(Node *j = i->next; j != NULL; j = j->next){
            // asending
            if(i->val > j->val){
                swap(i->val, j->val);
            }
        }
    }
}

int main() {
    Node *head = NULL;
    Node *tail = NULL;
    cout << "Enter values: " << endl;
    while(true){
        int val;
        cin >> val;
        if(val == -1){
            break;
        }
        insert_at_tail(head, tail, val);
    }
    print_linked_list(head);
    cout << "Sort the linked list: " << endl;
    sort_singly_linked_list(head);
    print_linked_list(head);
}