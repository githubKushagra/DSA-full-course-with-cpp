// brute force algo - first sort and then fetch last element (O NlogN)
// optimal solution - By using iteration on each element - (O N)

#include<iostream>
using namespace std;

int main() {
    cout << "Finding the largest element in the array" << endl;

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

    int largestElement = arr[0];

    for(int i=1;i<size;i++) {
        if(largestElement < arr[i]) {
            largestElement = arr[i];
        }
    }

    cout << "Largest element in the array is " << largestElement;
}