#include<bits/stdc++.h>
using namespace std;

// diff btw set and multiset is multiset can store multiple unique elements in it while set can only store once.
// multiset is used when we need to store multiple elements with same value in it.
// set is used when we need to store unique elements in it.


int main() {
    multiset<int> mst;
    mst.insert(10);
    mst.insert(20);
    mst.insert(10);
    mst.insert(30);
    mst.insert(20);
    mst.insert(40);
    mst.insert(50);
    mst.emplace(50);

    for(auto i : mst) {
        cout << i << " ";
    }
    cout << endl;
    

    return 0;
}