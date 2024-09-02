#include<bits/stdc++.h>
using namespace std;

// prefer to use unordered_map in best and avg case bcz it will give O(1) as time complexity but in worst case use map instaed of unordered_map bcz map gives O(logN) and unordered_map gives O(N)
// map will store elements in sorted manner and unordered map will store in random manner

int main() {
    int n;
    cin >> n;

    int arr[n] = {0};
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }

    map<int , int> mpp;
    for(int i=0;i<n;i++) {
        mpp[arr[i]]++;
    }


    // iterate in the map
    // 1st way
    for(auto it = mpp.begin(); it != mpp.end(); it++) {
        cout << it->first << "->" << it->second << endl;
    }
    cout << endl;

   
    // 2nd way
    for(auto it : mpp) {
        cout << it.first << "->" << it.second << endl;
    }
    cout << endl;


    int q;
    cin >> q;
    while(q--) {
        int number;
        cin >> number;

        cout << "Frequency of " << number << " is " << mpp[number] << endl;
    }
}