#include<bits/stdc++.h>
using namespace std;


int pivotIndexFinder(vector<int> &arr , int low , int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i < j) {
        
        // it will check if arr[i] is less than or equal to pivot then increment i else swap with j 
        while(arr[i] <= pivot && i < high) {
            i++;
        }

        // it will check if arr[j] is greater than pivot then decrement j else swap with j 
        while(arr[j] > pivot && j > low) {
            j--;
        }

        //  if both while loop get stuch in some situation and if i < j then swap i and j elements
        if(i < j) {
            swap(arr[i], arr[j]);
        }
    }

    // at the end swap the pivot with j element that is the correct place of our pivot
    swap(arr[low] , arr[j]);

    // returning pivot index
    return j;
}



void quickSort(vector<int> &arr , int low , int high) {
    if(low > high) {
        return ;
    }

    int pivotIndex = pivotIndexFinder(arr , low , high);
    quickSort(arr , low , pivotIndex-1);
    quickSort(arr , pivotIndex+1 , high);
}



int main() {
    int n;
    cin >> n;
    vector<int> arr(n);          // Initialize the vector with size n
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int low = 0;
    int high = n - 1;
    quickSort(arr , low , high);

    cout << "After using Quick sort: ";
    for(auto i : arr) {
        cout << i << " ";
    }
    cout << endl;
    // cout << endl;

    return 0;
}