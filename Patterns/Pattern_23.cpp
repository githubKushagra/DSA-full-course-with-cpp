/*
    E
    D E
    C D E
    B C D E
    A B C D E
*/


#include<bits/stdc++.h>
using namespace std;

// this program will run only when character starts with E
void printPattern(int n) {
    for(int i=0 ; i<n ; i++) {
        for(char ch = 'E' - i ; ch <= 'E' ; ch++) {
            cout << ch;
        }
        cout << endl;
    }
}

// this function will apllicable for all abphabets from A to Z and n is from [1 , 25].
void printPattern2(int n) {
    for(int i=0 ; i<n ; i++) {
        char c = char(n + 64);
        for(char ch = c - i ; ch <= c ; ch++) {
            cout << ch;
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    printPattern(n);
    printPattern2(n);

    return 0;
}