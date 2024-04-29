#include <iostream>
using namespace std;
#include <limits.h>


void rotateLeftArray(int arr[] , int n) {
    int temp = arr[0];

    for(int i=1;i<n;i++) {
        arr[i-1] = arr[i];
    }

    arr[n-1] = temp;
}

int main() {

    // better solution
    cout << "Rotating the Array element to the left(only one-one element)" << endl;

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

    rotateLeftArray(arr , size);


    cout << "rotated array to left side: ";
    for(int i=0;i<size;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


