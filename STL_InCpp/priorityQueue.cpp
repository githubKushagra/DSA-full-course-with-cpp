#include<bits/stdc++.h>
using namespace std;

int main() {
    
    // max heap
    priority_queue<int> pq;
    pq.push(30);
    pq.push(20);
    pq.push(50);
    pq.push(40);
    pq.push(10);

    pq.pop();
    cout << pq.top() << endl;


    while(!pq.empty()) {
        cout << pq.top() << endl;
        pq.pop();
    }



    // min heap
    priority_queue<int, vector<int>, greater<int>> pq2;
    pq2.push(30);
    pq2.push(20);
    pq2.push(50);
    pq2.push(40);
    pq2.push(10);

    cout << pq2.top() << endl;
    pq2.pop();
    cout << pq2.top() << endl;

    while(!pq2.empty()) {
        cout << pq2.top() << endl;
        pq2.pop();
    }

    
    return 0;

}