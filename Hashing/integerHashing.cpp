#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n :- ";
    cin >> n;
    int arr[n];

    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    // sort(arr,arr+n);

    
    // precomputing
    int hashh[10000] = {0};       // max size of an array can be :- 10 pow 6 means 1000000 // Initialize the hashh array with 0 
    for(int i=0;i<n;i++) {
        hashh[arr[i]]++;
    }

    int noOfQuantityToCheck;
    cin >> noOfQuantityToCheck;
    while(noOfQuantityToCheck--) {
        int number;
        cin >> number;
        // check if number is present in array or not
        if(hashh[number] > 0) {
            cout << "YES number is present and frequency is " << hashh[number] << endl;
        }
        else {
            cout << "NO number is not present" << endl;
        }
    }


    return 0;
}