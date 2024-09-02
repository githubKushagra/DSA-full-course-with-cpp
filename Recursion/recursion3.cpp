#include<bits/stdc++.h>
using namespace std;

void printFromNToOne(int i , int n) {
    if(i < 1) {
        return;
    }

    cout << i << " ";
    printFromNToOne(i - 1 , n);
}


void printFromNToOne2(int i , int n) {
    if(i > n) {
        return;
    }

    printFromNToOne2(i + 1 , n);
    cout << i << " ";
}

int main() {
    int n;
    cin >> n;
    printFromNToOne(n , n);

    cout << endl;

    // another way
    printFromNToOne2(1 , n);
}