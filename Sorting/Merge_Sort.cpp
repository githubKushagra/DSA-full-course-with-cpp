#include<bits/stdc++.h>
using namespace std;




void mergeArrays(vector<int> &arr, int low , int mid , int high) {
    vector<int> v;
    int left = low;
    int right = mid + 1;

    while(left <= mid && right <= high) {
        if(arr[left] <= arr[right]) {
            v.push_back(arr[left]);
            left++;
        }
        else {
            v.push_back(arr[right]);
            right++;
        }
    }

    while(left <= mid) {
        v.push_back(arr[left]);
        left++;
    }

    while(right <= high) {
        v.push_back(arr[right]);
        right++;
    }

    for(int i=low ; i <= high ; i++) {
        arr[i] = v[i - low];
    }
}



void mergeSort(vector<int> &arr , int low , int high) {
    if(low >= high) {
        return;
    }

    int mid = (low + high) / 2;
    mergeSort(arr , low , mid);      // divides first half of the array.
    mergeSort(arr , mid+1 , high);    // divides the second half of the array.
    mergeArrays(arr , low , mid , high);     // merges the two halves of the array.
}



int main() {
    int n;
    cin >> n;
    vector<int> arr(n);          // Initialize the vector with size n
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int low = 0;
    int high = n - 1;
    mergeSort(arr , low , high);

    cout << "After using Merge sort: ";
    for(auto i : arr) {
        cout << i << " ";
    }
    cout << endl;
    // cout << endl;

    return 0;
}