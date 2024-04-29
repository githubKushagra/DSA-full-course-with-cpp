// better solution - first find largest element and then take a var named as secondLargest = -1 , and then compare with all element and make sure secondLargest must be greater than all other elements but other element should not equla to the largest element and the condition will be             if(secondLargest < arr[i] && arr[i] != Largest) { secondLargest = arr[i] }

#include<iostream>
using namespace std;
#include <limits.h>

int main() {

    // better solution
    cout << "Finding the Second largest element in the array" << endl;

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

    cout << "Largest element in the array is " << largestElement << endl;

    int secondLargestElement = INT_MIN;

    for(int i=0;i<size;i++) {
        if(secondLargestElement < arr[i] && arr[i] != largestElement) {
            secondLargestElement = arr[i];
        }
    }

    cout << "Second Largest element in the array is " << secondLargestElement << endl;







    // optimal solution
    cout << endl;
    cout << "Finding the Second largest element in the array" << endl;

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

    int largestElement2 = 0;
    int secondLargestElement2 = INT_MIN;


// approach is initially largestelement is having largest value(assume) and when it get more largest value then it's value then the value that it is having will become second largest value so we are using that approach
    for(int i=1;i<size2;i++) {
        if(largestElement2 < arr2[i]) {
            secondLargestElement2 = largestElement2;
            largestElement2 = arr2[i];
        }
        else if(largestElement2 > arr2[i] && secondLargestElement2 < arr2[i]) {
            secondLargestElement2 = arr2[i];
        }
    }

    cout << "Largest element in the array is " << largestElement2 << endl;
    cout << "Second Largest element in the array is " << secondLargestElement2 << endl;

}