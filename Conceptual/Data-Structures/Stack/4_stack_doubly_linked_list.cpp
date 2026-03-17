#include<iostream>
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

class myStack{
    public:
    Node *head = NULL;
    Node *tail = NULL;
    int size_of_stack = 0;

    // push():
    void push(int val){
        size_of_stack++;
        Node *newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
        return;
    }

    // pop():
    void pop(){
        size_of_stack--;
        Node *deleteNode = tail;
        tail = tail->prev;
        if(tail == NULL){
            head = NULL;
        }else{
            tail->next = NULL;
        }
        delete deleteNode;
    }

    // top():
    int top(){
        return tail->val;
    }

    // size():
    int size(){
        return size_of_stack;
    }

    // empty():
    bool empty(){
        if(size_of_stack == 0){
            return true;
        }else{
            return false;
        }
    }
};

int main(){
    myStack st;
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        int x; cin >> x;
        st.push(x);
    }

    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}