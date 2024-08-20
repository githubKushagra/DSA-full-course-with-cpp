/*
    **********
    ****  ****
    ***    ***
    **      **
    *        *   upto this we will consider it as a upper half and below this will be lower half
    *        *
    **      **
    ***    ***
    ****  ****
    **********

    pattern sequence = [stars , space , stars]
*/


#include<bits/stdc++.h>
using namespace std;

void printPattern(int n) {
    // for upper half
    for(int i=0;i<n;i++) {
        //stars
        for(int j=0;j<n-i;j++) {
            cout << "*";
        }

        //spaces
        for(int j=0;j<2*i;j++) {
            cout << " ";
        }

        //stars
        for(int j=0;j<n-i;j++) {
            cout << "*";
        }
        cout << endl;
    }

    // for lower half
        for(int i=0;i<n;i++) {
            //stars
            for(int j=0;j<=i;j++) {
                cout << "*";
            }

            // spaces
            for(int j=0;j<2*n-2*(i+1);j++) {
                cout << " ";
            }

            //stars
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