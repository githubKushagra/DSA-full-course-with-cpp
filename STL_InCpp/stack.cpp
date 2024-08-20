#include<bits/stdc++.h>
using namespace std;

int main() {
    
    stack<int> st;
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);
    cout << "Size of stack: " << st.size() << endl;
    cout << "Top element of stack: " << st.top() << endl;
    st.pop();
    cout << "Size of stack after pop: " << st.size() << endl;
    
    return 0;

}