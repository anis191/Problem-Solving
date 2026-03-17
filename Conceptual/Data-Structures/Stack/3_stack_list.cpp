// Stack implement using linked list(list):
#include<iostream>
#include <vector>
#include <list>
using namespace std;

class myStack{
    public:
    list<int>l;

    // push():
    void push(int val){
        l.push_back(val);
    }

    // pop():
    void pop(){
        l.pop_back();
    }

    // top():
    int top(){
        return l.back();
    }

    // size():
    int size(){
        return l.size();
    }

    // empty():
    bool empty(){
        if(l.size() == 0){
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