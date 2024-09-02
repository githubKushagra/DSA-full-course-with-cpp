#include<bits/stdc++.h>
using namespace std;


// reverse an array

void reverseArray(int arr[] , int l , int i , int j) {
    if(i >= j) {
        return;
    }
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    reverseArray(arr , l , i+1 , j-1);
}



void reverseArray2(int arr[] , int n , int i) {
    if(i >= n/2) {
        return;
    }
    int temp = arr[i];
    arr[i] = arr[n-i-1];
    arr[n-i-1] = temp;
    reverseArray2(arr , n , i+1);
}


int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int len = sizeof(arr)/sizeof(arr[0]);
    int i = 0;
    int j = len - 1;

    
    // using double pointer - i and j

    cout << "Array before reversing : ";
    for(int i=0;i<len;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    reverseArray(arr , len , i , j);


    cout << "Array after reversing : ";
    for(int i=0;i<len;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;



    // using single pointer - i
    reverseArray2(arr , len , i);
    cout << "Array after reversing 2nd time : ";
    for(int i=0;i<len;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}