
#include<iostream>
using namespace std;
#include <limits.h>

int main() {

    // better solution
    cout << "Finding the Second Smallest element in the array" << endl;

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

    int smallestELement = arr[0];

    for(int i=1;i<size;i++) {
        if(smallestELement > arr[i]) {
            smallestELement = arr[i];
        }
    }

    cout << "Smallest element in the array is " << smallestELement << endl;

    int secondSmallestELement = INT_MAX;

    for(int i=0;i<size;i++) {
        if(secondSmallestELement > arr[i] && arr[i] != smallestELement) {
            secondSmallestELement = arr[i];
        }
    }

    cout << "Second Smallest element in the array is " << secondSmallestELement << endl;







    // optimal solution
    cout << endl;
    cout << "Finding the Second Smallest element in the array" << endl;

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

    int smallestELement2 = arr2[0];
    int secondSmallestELement2 = INT_MAX;


    for(int i=1;i<size2;i++) {
        if(smallestELement2 > arr2[i]) {
            secondSmallestELement2 = smallestELement2;
            smallestELement2 = arr2[i];
        }
        else if(smallestELement2 != arr2[i] && secondSmallestELement2 > arr2[i]) {
            secondSmallestELement2 = arr2[i];
        }
    }

    cout << "Smallest element in the array is " << smallestELement2 << endl;
    cout << "Second Smallest element in the array is " << secondSmallestELement2 << endl;

}