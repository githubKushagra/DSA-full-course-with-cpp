#include<bits/stdc++.h>
#include <algorithm>  // Include for std::sort
#include <functional> // Include for std::greater
using namespace std;

int main() {
    int a[] = {45,49,21,654,9,19,15,4,20,49};
    int length = sizeof(a)/sizeof(a[0]);

    // 1st way
    sort(a,a+length);
    for(int i=0;i<length;i++) {
        cout << a[i] << " ";
    }
    cout << endl;


    // 2nd way (sorting in decreasing order)
    int b[] = {45,49,21,654,9,19,15,4,20,49};
    int length2 = sizeof(b)/sizeof(b[0]);

    sort(b,b+length2,greater<int>());
    // Output the sorted array
    for(int i = 0; i < length2; i++) {
        cout << b[i] << " ";
    }
    cout << endl;


    vector<int> v;
    v.push_back(5);
    v.push_back(2);
    v.push_back(8);
    v.push_back(1);
    v.push_back(9);
    v.push_back(7);

    sort(v.begin() , v.end());
    for(int i = 0; i < v.size(); i++) {      // iteration in vector
        cout << v[i] << " ";
    }
    cout << endl;




    return 0;
}