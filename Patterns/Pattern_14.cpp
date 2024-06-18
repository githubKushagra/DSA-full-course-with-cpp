/*
    * 
    * *
    * * * 
    * * * *
    * * * 
    * *
    * 
*/


#include<bits/stdc++.h>
using namespace std;

void printPattern(int n) {
    for(int i=0;i<2*n;i++) {
        int stars = i;
        if(i >= n) {
            stars = 2*n-i;
        }

        for(int j=0;j<stars;j++) {
            cout << "* ";
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