#include<bits/stdc++.h>
using namespace std;

void swap(int &a , int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int selectionSort(int arr[] , int n) {

    for(int i=0 ; i<n-1 ; i++) {
        int minimum = i;

        for(int j=i+1 ; j<n ; j++) {
            if(arr[j] < arr[minimum]) {
                minimum = j;
            }
        }

        // after finding the minimum element, swap will be there
        swap(arr[i] , arr[minimum]);
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

    selectionSort(arr , lengthOfArray);

    cout << "After using selection sort: ";
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}