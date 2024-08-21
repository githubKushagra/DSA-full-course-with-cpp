#include<bits/stdc++.h>
using namespace std;

// diff btw set and unordered set is unordered set will store the elements in random manner not in sorted manner but elements will be unique in nature
// set will store the elements in sorted manner and elements will be unique in nature



int main() {
    unordered_set<int> ust;
    ust.insert(23);
    ust.insert(45);
    ust.insert(67);
    ust.insert(23); // duplicate element will be ignored
    ust.insert(45); // duplicate element will be ignored
    ust.emplace(90);
    ust.emplace(90); // duplicate element will be ignored



    for(auto i : ust) {
        cout << i << " ";
    }
    cout << endl;
    

    return 0;
}