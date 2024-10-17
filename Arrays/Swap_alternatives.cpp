#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int len) {
    for(int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void SwapAlternatives(int arr[], int len) {
    for(int i = 0; i < len; i += 2) {
        if(i + 1 < len) {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main() {
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    SwapAlternatives(arr, n);
    printArray(arr, n);

    return 0;
}
