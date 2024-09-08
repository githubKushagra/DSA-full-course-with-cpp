#include<bits/stdc++.h>
using namespace std;

void swap(int &a , int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int insertionSort(int arr[] , int n) {

    for(int i=1 ; i<n-1 ; i++) {
        int key = i;
        while(key > 0 && arr[key-1] > arr[key]) {
            swap(arr[key-1] , arr[key]);
            key--;
        }
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int lengthOfArray = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr , lengthOfArray);

    cout << "After using Insertion sort: ";
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}