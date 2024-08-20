#include<bits/stdc++.h>
using namespace std;

int main() {
    deque<int> dq;

    dq.push_back(1);
    dq.push_front(0);
    dq.emplace_back(4);
    dq.emplace_front(3);
    

    for(auto i : dq) {
        cout << i << " ";
    }
    cout << endl;

    dq.pop_back();
    for(auto i : dq) {
        cout << i << " ";
    }
    cout << endl;

    dq.pop_front();
    for(auto i : dq) {
        cout << i << " ";
    }
    cout << endl;
}