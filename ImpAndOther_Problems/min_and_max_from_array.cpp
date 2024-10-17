#include <bits/stdc++.h>
using namespace std;


void findingMinAndMax(int arr[] , int len) {
    int min = INT_MAX;
    int max = INT_MIN;

    // int len = sizeof(arr) / sizeof(arr[0]);

    for(int i=0 ; i<len ; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;
}



int main() {
    int n;
    cin >> n;
    int arr[n];

    for(int i=0 ; i<n ; i++) {
        cin >> arr[i];
    }

    findingMinAndMax(arr , n);
}