#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int>st;

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