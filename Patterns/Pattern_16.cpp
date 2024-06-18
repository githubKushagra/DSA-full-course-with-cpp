/*
    1        1
    12      21
    123    321
    1234  4321
    1234554321
*/


#include<bits/stdc++.h>
using namespace std;

void printPattern(int n) {
    int space = 2 * (n - 1);
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=i;j++) {
            cout << j;
        }
        for(int j=1;j<=space;j++) {
            cout << " ";
        }
        for(int j=i;j>=1;j--) {
            cout << j;
        }
        cout << endl;
        space -= 2;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    printPattern(n);

    return 0;
}