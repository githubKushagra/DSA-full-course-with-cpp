#include<bits/stdc++.h>
using namespace std;


int main() {
    map<int , int> mp;
    mp.insert({1,19});
    mp.insert({2,20});
    mp.insert({3,21});
    mp.emplace(4,54);

    for(auto i : mp) {
        cout << i.first << " " << i.second << endl;
    }
    cout << endl;

    return 0;
}