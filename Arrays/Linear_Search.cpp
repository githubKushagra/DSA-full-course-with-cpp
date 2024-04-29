
#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>


bool LinearSearch(int arr[] , int n , int k) {
    for(int i=0;i<n;i++) {
        if(arr[i] == k) {
            return true;
        }
    }
    return false;
}

int main() {
    // brute force sol 
    cout << "Linear Search" << endl;

    cout << "Enter the size of the array : ";
    int size , ele;
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the array: ";
    for(int i=0;i<size;i++) {
        cin >> arr[i];
    }
    cout << endl;

    cout << "enter te element to search: ";
    cin >> ele;


    cout << "Original array: ";
    for(int i=0;i<size;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    bool isPresent = LinearSearch(arr , size , ele);
    if(isPresent) {
        cout << ele << " is present in the array" << endl;
    }
    else {
        cout << ele << " is not present in the array" << endl;
    }

}