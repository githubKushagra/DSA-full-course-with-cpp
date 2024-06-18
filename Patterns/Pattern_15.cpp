/*
    1
    0 1
    1 0 1
    0 1 0 1
    1 0 1 0 1
*/


#include<bits/stdc++.h>
using namespace std;

void printPattern(int n) {
    int starts = 0;
    for(int i=0;i<n;i++) {
        if(i % 2 == 0) {
            starts = 1;
        }
        else {
            starts = 0;
        }

        for(int j=0;j<=i;j++) {
            cout << starts << " ";
            starts = 1 - starts;
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