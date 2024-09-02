#include<bits/stdc++.h>
using namespace std;

void printName(int i , int n) {
    if(i > n) {
        return;
    }

    cout << "Kushagra Varshney" << endl;
    printName(i + 1 , n);
}

int main() {

    int n;
    cout << "Enter the value of n :- ";
    cin >> n;
    printName(1 , n);
}