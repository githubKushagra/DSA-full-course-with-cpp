#include<bits/stdc++.h>
using namespace std;

void printOneToN(int i , int n) {
    if(i > n) {
        return;
    }

    cout << i << " ";
    printOneToN(i + 1 , n);
}


void printOneToN2(int i , int n) {
    if(i < 1) {
        return;
    }
    printOneToN2(i - 1 , n);
    cout << i << " ";
}

int main() {
    int n;
    cin >> n;
    printOneToN(1 , n);

    cout << endl;

    // another way
    printOneToN2(n , n);
}