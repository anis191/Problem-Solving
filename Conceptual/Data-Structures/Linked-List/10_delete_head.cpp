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
    Node *tmp = head;
    while(tmp != NULL){
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
    return;
}

void insert_at_any_position(Node *&head, int pos, int value){
    Node *newNode = new Node(value);
    Node *tmp = head;
    for(int i = 1; i <= pos-1; i++){  /*Here position(pos) is index(0,1,2...) base*/
        tmp = tmp->next;
        if(tmp == NULL){
            cout << "Invalid input." << endl;
            return;
        }
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}

void insert_at_head(Node *&head, int value){
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

void delete_from_position(Node *&head, int pos){
    Node *tmp = head;
    for(int i=1; i<=pos-1; i++){
        tmp = tmp->next;
        if(tmp == NULL){
            cout << "Invalid Input." << endl;
            return;
        }
    }
    if(tmp->next == NULL){
        cout << "Invalid Input." << endl;
        return;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}

void delete_head(Node *&head){
    if(head == NULL){
        cout << "Invalid." << endl;
        return;
    }
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}

int  size_of_linked_list(Node *head){
    int count = 0;
    Node *tmp = head;
    while(tmp != NULL){
        count++;
        tmp = tmp->next;
    }
    return count;
}

int main(){
    Node *head = NULL;
    Node *tail = NULL;
    while(true){
        cout << "Option 1:Insert at any position." << endl;
        cout << "Option 2:Insert at tail." << endl;
        cout << "Option 3:Print full linked list." <<endl;
        cout << "Option 4:Program stop." <<endl;
        cout << "Option 5:Delete from position" <<endl;
        cout << "Option 6:Multiple values input " <<endl;
        int option; cin >> option;
        if(option == 1){
            cout<<"Enter position: ";
            int pos; cin>>pos;
            cout<<"Enter a value: ";
            int value; cin>>value;
            if(pos == 0){
                insert_at_head(head,value);
            }else{
                if(pos == size_of_linked_list(head)){
                    insert_at_tail(head, tail, value);
                }else{
                    insert_at_any_position(head,pos,value);
                }
            }
        }
        else if(option == 2){
            cout<<"Enter a value: ";
            int value; cin>>value;
            insert_at_tail(head, tail, value);
            cout<<"Value inserted!"<<endl;
        }
        else if(option == 3){
            print_linked_list(head);
        }
        else if(option == 4){
            cout<<"Program terminated!"<<endl;
            break;
        }else if (option == 5){
            cout << "Enter position(index based): " << endl;
            int pos; cin >> pos;
            if(pos == 0){
                delete_head(head);
            }else{
            delete_from_position(head, pos);}
        }else if(option == 6){
            while(true){
                int val;
                cin >> val;
                if(val == -1){
                    break;
                }
                insert_at_tail(head, tail, val);
            }
        }else{
            cout<<"Wrong input"<<endl;
        }
    }
}