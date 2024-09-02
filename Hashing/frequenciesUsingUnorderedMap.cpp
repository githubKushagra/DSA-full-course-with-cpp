#include<bits/stdc++.h>
using namespace std;

// prefer to use unordered_map in best and avg case bcz it will give O(1) as time complexity but in worst case use map instaed of unordered_map bcz map gives O(logN) and unordered_map gives O(N)
// map will store elements in sorted manner and unordered map will store in random manner


int main() {
    int n;
    cin >> n;
    int arr[n];
    unordered_map<int , int> umpp;

    for(int i=0;i<n;i++) {
        cin >> arr[i];
        umpp[arr[i]]++;
    }

    // iterate over unordered map
    for(auto it = umpp.begin(); it != umpp.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }
    cout << endl;

    int q;
    cin >> q;
    while(q--) {
        int x;
        cin >> x;
        if(umpp.find(x) != umpp.end()) {
            cout << "The frequency of " << x << " is " << umpp[x] << endl;
        }
        else {
            cout << "key " << x << " is not present in the map" << endl;
        }
    }
}