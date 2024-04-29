#include <iostream>
using namespace std;
#include <limits.h>


void rotateRightArray(int arr[] , int n) {
    int temp = arr[n-1];

    for(int i=n-1;i>0;i--) {
        arr[i] = arr[i-1];
    }

    arr[0] = temp;
}

int main() {

    // better solution
    cout << "Rotating the Array element to the right(only one-one element)" << endl;

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

    rotateRightArray(arr , size);


    cout << "rotated array to right side: ";
    for(int i=0;i<size;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


