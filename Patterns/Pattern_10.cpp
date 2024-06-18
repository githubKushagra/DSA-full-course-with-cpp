/*
          * 
        * *
      * * * 
    * * * *
  * * * * *
*/


#include<bits/stdc++.h>
using namespace std;

void printPattern(int n) {
    for(int i=0 ; i<n ; i++) {
        for(int j = 0 ; j<n-i-1 ; j++) {
            cout << " ";
        }
        for(int j=0;j<=i;j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    printPattern(n);

    return 0;
}