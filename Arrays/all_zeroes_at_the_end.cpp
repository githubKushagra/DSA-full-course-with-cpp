
#include <iostream>
using namespace std;
#include <limits.h>
#include <vector>


void zeroesAtTheEnd(int arr[] , int n) {
    vector<int> tempArr;

    for(int i=0;i<n;i++) {
        if(arr[i] != 0) {
            tempArr.push_back(arr[i]);     // take all non 0's value into this vector array
        }
    }

    int nonZeroArraySize = tempArr.size();
    for(int i=0;i<nonZeroArraySize;i++) {
        arr[i] = tempArr[i];      // put all non 0's value inside the array
    }

    for(int i=nonZeroArraySize;i<n;i++) {
        arr[i] = 0;
    }
}


void swap(int &a , int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void zeroesAtTheEnd2(int arr[] , int n) {
    int j = -1;

    for(int i=0;i<n;i++) {
        if(arr[i] == 0) {
            j = i;
            break;
        }
    }

    for(int i=j+1;i<n;i++) {
        if(arr[i] != 0) {
            swap(arr[i] , arr[j]);
            j++;
        }
    }
}

int main() {


    // brute force sol 
    cout << "place zeroes at the end" << endl;

    cout << "Enter the size of the array : ";
    int size;
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the array: ";
    for(int i=0;i<size;i++) {
        cin >> arr[i];
    }
    cout << endl;


    cout << "Original array: ";
    for(int i=0;i<size;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    zeroesAtTheEnd(arr , size);
    cout << endl;

    cout << "Array after putting 0's at the end: ";
    for(int i=0;i<size;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;







    // optimal sol 
    cout << "place zeroes at the end" << endl;

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

    zeroesAtTheEnd2(arr2 , size2);
    cout << endl;

    cout << "Array after putting 0's at the end: ";
    for(int i=0;i<size2;i++) {
        cout << arr2[i] << " ";
    }
    
    cout << endl;
    
}


