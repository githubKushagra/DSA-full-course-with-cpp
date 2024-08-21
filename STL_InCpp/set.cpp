#include<bits/stdc++.h>
using namespace std;

int main() {
    set<int> st;

    st.insert(52);
    st.insert(6523);
    st.insert(5);
    st.insert(54);
    st.insert(21);
    st.emplace(1);
    st.insert(54);    // will not be inserted bcz set contains only unique elements in it.

    for(auto i : st) {
        cout << i << " ";
    }
    cout << endl;

    st.erase(5);
    for(auto i : st) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}