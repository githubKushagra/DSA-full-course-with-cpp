#include <iostream>
using namespace std;
#include <limits.h>


bool isSortedArray(int arr[] , int n) {
    for(int i=1;i<n;i++) {
        if(arr[i] < arr[i-1]) {
            return false;
        }
    }
    return true;
}

int main() {

    // better solution
    cout << "Check whether given array is sorted or not (we are assuming that sorted array must be in ascending order)" << endl;

    cout << "Enter the size of the array : ";
    int size;
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the array: ";
    for(int i=0;i<size;i++) {
        cin >> arr[i];
    }

    cout << "Original array: ";
    for(int i=0;i<size;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    bool status = isSortedArray(arr , size);
    if(status) {
        cout << "The given array is Sorted" << endl;
    }
    else {
        cout << "The given array is not Sorted" << endl;
    }
    
}


