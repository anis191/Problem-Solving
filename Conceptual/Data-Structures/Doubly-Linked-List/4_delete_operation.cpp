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

int size_of_doubly_linked_list(Node *head){
    int size = 0;
    while(head != NULL){
        head = head->next;
        size++;
    }
    return size;
}

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

void insert_head(Node *&head, Node *&tail, int val){
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insert_at_position(Node *&head, Node *&tail, int pos, int val){
    if(pos == 0){
        insert_head(head, tail, val);
        return;
    }
    if(pos >= size_of_doubly_linked_list(head)){
        cout << "Invalid position" << endl;
        return;
    }
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


void insert_tail(Node *&head, Node *&tail, int val){
    Node *newNode = new Node(val);
    if(tail == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void delete_at_position(Node *&head, Node *&tail, int pos){
    if(pos == 0){
        Node *deleteNode = head;
        if(head == tail){
            head = NULL;
            tail = NULL;
            delete deleteNode;
            return;
        }
        head = head->next;
        delete deleteNode;
        head->prev = NULL;
        return;
    }
    Node *tmp = head;
    for(int i = 1; i <= pos-1; i++){
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    tmp->next->prev = tmp;
    delete deleteNode; 
}

void delete_tail(Node *&head, Node *&tail){
    Node *deleteNode = tail;
    if(tail == head){
        head = NULL;
        tail = NULL;
        delete deleteNode;
        return;
    }
    tail = tail->prev;
    delete deleteNode;
    tail->next = NULL;
}

int main(){
    cout << endl;
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
    // cout << "Print Reverse: " << endl;
    // print_reverse(tail);

    while(true){
        cout << "Option 1: Insert at head" << endl;
        cout << "Option 2: Insert at any position" << endl;
        cout << "Option 3: Delete any position" << endl;
        cout << "Option -1: Terminate the program" << endl;
    
        int option = 0;
        cout << "Choose option: " << endl;
        cin >> option; 
        if(option == -1){
            break;
        }else if(option == 1){
            int val;
            cout << "Enter value: ";
            cin >> val;
            insert_head(head, tail, val);
            cout << "Your Linked List: " << endl;
            print_normal(head);
        }else if(option == 2){
            int pos, val;
            cout << "Enter position: ";
            cin >> pos;
            cout << "Enter value: ";
            cin >> val;
            if(pos == size_of_doubly_linked_list(head)){
                insert_tail(head, tail, val);
            }else{
                insert_at_position(head, tail, pos, val);
            }
            cout << "Your Linked List: " << endl;
            print_normal(head);
        }else if(option == 3){
            int pos;
            cout << "Enter position: ";
            cin >> pos;
            if(pos >= size_of_doubly_linked_list(head)){
                cout << "Invalid position" << endl;
            }else if(pos == size_of_doubly_linked_list(head)-1){
                delete_tail(head,tail);
                cout << "Your Linked List: " << endl;
                print_normal(head);
            }else{
                delete_at_position(head, tail, pos);
                cout << "Your Linked List: " << endl;
                print_normal(head);
            }
        }else{
            cout << "Invalid option! Try again." << endl;
        }
    }
}