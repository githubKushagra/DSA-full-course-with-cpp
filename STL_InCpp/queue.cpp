#include<bits/stdc++.h>
using namespace std;

int main() {
    
    queue<int> qt;
    qt.push(4);
    qt.push(3);
    qt.push(2);
    qt.push(1);
    cout << "Size of stack: " << qt.size() << endl;
    cout << "Top element of stack: " << qt.front() << endl;
    cout << "Top element of stack: " << qt.back() << endl;
    qt.pop();
    cout << "Size of stack after pop: " << qt.size() << endl;
    cout << "Top element of stack: " << qt.front() << endl;
    cout << "Top element of stack: " << qt.back() << endl;


    while(!qt.empty()) {
        cout << qt.front() << endl;
        qt.pop();
    }
    
    return 0;

}