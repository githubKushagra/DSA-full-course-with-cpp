#include<bits/stdc++.h>
using namespace std;

int main() {
    list<int> lt;

    lt.push_front(1);
    lt.push_back(2);
    lt.push_back(3);
    lt.push_front(0);
    lt.emplace_back(5);
    lt.emplace_front(4);


    for(auto i : lt) {
        cout << i << " ";
    }
    cout << endl;

    lt.pop_front();
    for(auto i : lt) {
        cout << i << " ";
    }
    cout << endl;

    lt.pop_back();
    for(auto i : lt) {
        cout << i << " ";
    }
    cout << endl;

}