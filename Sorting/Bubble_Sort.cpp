#include<bits/stdc++.h>
using namespace std;

void swap(int &a , int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int arr[] , int n) {

    for(int i=n-1 ; i>=0 ; i--) {

        int didSwap = 0;      // we use this to check whether our array is already sorted or not

        for(int j=0 ; j<i ; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j] , arr[j+1]);
                didSwap = 1;     // if swapping happens then change the value of didSwap to 1
            }
        }

        if(didSwap == 0) {       // f didSwap == 0 that means in first iteration no swapping is happened that means our array is already so no need to iterate again simply break the loop and this will be our best case
            return;
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

    bubbleSort(arr , lengthOfArray);

    cout << "After using Bubble sort: ";
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}