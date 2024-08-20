/*
            1
           121
          12321
         1234321
        123454321
*/


#include<bits/stdc++.h>
using namespace std;

void printPattern(int n) {
    for(int i=0 ; i<n ; i++) {
        // spaces
        for(int j = 0 ; j<=n-i-1 ; j++) {
            cout << " ";
        }
        // for characters
        int num = 1;
        int breakpoint = (2*i+1) / 2;
        for(int j = 1 ; j<=(2*i+1) ; j++) {
            cout << num;
            if(j <= breakpoint) {
                num++;
            }
            else {
                num--;
            }
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