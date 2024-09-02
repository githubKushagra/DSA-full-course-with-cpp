#include<bits/stdc++.h>
using namespace std;

int fiboNthTerm(int n) {
    if(n <= 1) {
        return n;
    }

    int last = fiboNthTerm(n-1);
    int secondLast = fiboNthTerm(n-2);
    return last + secondLast;
}

int main() {
    int n;
    cin >> n;
    int fibo = fiboNthTerm(n);
    cout << n << " term of fibonacci series is : " << fibo << endl;
}