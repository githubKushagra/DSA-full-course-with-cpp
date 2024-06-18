/*
    A B C D E
    A B C D
    A B C
    A B
    A
*/


#include<bits/stdc++.h>
using namespace std;

void printPattern(int n) {
    for(int i=0;i<n;i++) {
        for(char ch = 'A';ch <= 'A' + (n-i-1);ch++) {
            cout << ch << " ";
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