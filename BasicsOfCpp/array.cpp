#include<bits/stdc++.h>
using namespace std;

int main() {
    // 1D array
    int arr[5];
    // cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    // cout << "Our array elements will be: ";
    // cout << arr[0] << arr[1] << arr[2] << arr[3] << arr[4];

//  every character in the string is stored at particular index and indexing starts from 0.
    string strArr = "Kushagra Varshney";
    cout << strArr[0] << strArr[1] << strArr[2];
    // both are same
    int len = strArr.length();
    int len2 = strArr.size();
    cout << "length of string using length method: " << len << " using size method: " << len2 << endl;
}