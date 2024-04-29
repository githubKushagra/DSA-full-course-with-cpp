// d places means id d = 2 then rotate upto 2 places like we have an array = {1,2,3,4} then output will be 3,4,1,2.

#include <iostream>
using namespace std;
#include <limits.h>


void rotateLeftArrayUptoDplaces(int arr[] , int n , int d) {
    d = d % n;
    int temp[d];
    for(int i=0;i<d;i++) {
        temp[i] = arr[i];
    }

    for(int i=d;i<n;i++) {
        arr[i-d] = arr[i];
    }

    for(int i=n-d;i<n;i++) {
        arr[i] = temp[i-(n-d)];      // or we can take another variable j in place of (n-d)
    }
}




void reverseArray(int arr[] , int start , int end) {
    while(start <= end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotateLeftArrayUptoDplaces2(int arr[] , int n , int d) {
    d = d % n;
    reverseArray(arr , 0 , d-1);     // rotate upto d from starting 
    reverseArray(arr , d , n-1);     // rotate upto n from d index 
    reverseArray(arr , 0 , n-1);     // rotate full array
}



int main() {



    // brute force solution where space complexity will be O(n) and time complexity will be O(n+d)
    cout << "Rotating the Array element to the left upto d places" << endl;

    cout << "Enter the size of the array : ";
    int size , d;
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the array: ";
    for(int i=0;i<size;i++) {
        cin >> arr[i];
    }
    cout << endl;

    cout << "Enter the value of d: ";
    cin >> d;

    cout << "Original array: ";
    for(int i=0;i<size;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    rotateLeftArrayUptoDplaces(arr , size , d);


    cout << "rotated array to left side: ";
    for(int i=0;i<size;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;







    // optimal sol where space complexity will be O(1) and time complexity will be O(2n)
    cout << "Rotating the Array element to the left upto d places" << endl;

    cout << "Enter the size of the array : ";
    int size2 , d2;
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
    cout << "Enter the value of d2: ";
    cin >> d2;


    rotateLeftArrayUptoDplaces2(arr2 , size2 , d2);

    cout << "Array after rotating from left upto d places: ";
    for(int i=0;i<size2;i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;
    
}


