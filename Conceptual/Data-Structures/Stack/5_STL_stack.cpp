#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int>st;

    st.push(11);
    cout << st.top() << endl;
    st.push(22);
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
}