#include <iostream>
using namespace std;
#include <limits.h>


int removeDuplicatesFromSortedArray(int arr[] , int n) {
    int i=0;
    for(int j=1;j<n;j++) {
        if(arr[j] != arr[i]) {
            arr[i+1] = arr[j];      // starting from 2nd element in the array
            i++;
        }
    }
    return i+1;
}



int removeDuplicatesFromSortedArray2(int arr[] , int n) {
    for(int i=0;i<n-1;i++) {
        for(int j=i+1;j<n;j++) {
            if(arr[j] == arr[i]) {
                for(int k=j;k<n;k++){ 
                    arr[k] = arr[k+1];
                }
                n--;
                j--;
            }
        }
    }
    return n;
}

int main() {

    // 1st solution (this code will work only when given array is sorted)
    cout << "Remove duplicates value from the given array" << endl;

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

    cout << "Array after removing duplicates from it: ";
    int newSizeOfArray = removeDuplicatesFromSortedArray(arr , size);
    for(int i=0;i<newSizeOfArray;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;








    // 2nd solution (this code will work on both the cases whether array is sorted or not)
    cout << "Remove duplicates value from the given array" << endl;

    cout << "Enter the size of the array : ";
    int size2;
    cin >> size2;
    int arr2[size2];
    cout << "Enter the elements of the array: ";
    for(int i=0;i<size2;i++) {
        cin >> arr2[i];
    }

    cout << "Original array: ";
    for(int i=0;i<size2;i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    cout << "Array after removing duplicates from it: ";
    int newSizeOfArray2 = removeDuplicatesFromSortedArray2(arr2 , size2);
    for(int i=0;i<newSizeOfArray2;i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;
    
}


