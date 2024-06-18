/*
            * 
          * * *
        * * * * * 
      * * * * * * *
    * * * * * * * * *
      * * * * * * *
        * * * * * 
          * * *
            * 
*/

#include<bits/stdc++.h>
using namespace std;

void printPattern1(int n) {
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = i; j < n; j++) {
            cout << "  ";
        }
        // Print stars
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // Lower half of the diamond
    for (int i = n - 1; i >= 1; i--) {
        // Print spaces
        for (int j = n; j > i; j--) {
            cout << "  ";
        }
        // Print stars
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "* ";
        }
        cout << endl;
    }
}


int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    printPattern1(n);

    return 0;
}