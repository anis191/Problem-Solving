// Stack implement using array(vector):
#include<iostream>
#include <vector>
using namespace std;

class myStack{
    public:
    vector<int>v;

    // push():
    void push(int val){
        v.push_back(val);
    }

    // pop():
    void pop(){
        v.pop_back();
    }

    // top():
    int top(){
        return v.back();
    }

    // size():
    int size(){
        return v.size();
    }

    // empty():
    bool empty(){
        if(v.size() == 0){
            return true;
        }else{
            return false;
        }
    }
};

int main(){
    myStack st;
    st.push(10);
    st.push(20);
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
}