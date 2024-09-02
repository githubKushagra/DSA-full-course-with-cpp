#include<bits/stdc++.h>
using namespace std;


int gcdFinder(int n , int m) {
    if(n == 0) {
        return m;
    }

    return gcdFinder(m % n , n);
}

int main() {
    int n = 30;
    int m = 20;

    int minOfTwo = min(n , m);

    for(int i=minOfTwo ; i > 0 ; i--) {
        if(n % i == 0 && m % i == 0) {
            cout << "GCD of " << n << " and " << m << " is " << i << endl;
            break;
        }
    }


    // another method
    int a = 30;
    int b = 15;
    int gcdOfTwoNumber = gcdFinder(a, b);
    cout << "GCD of " << a << " and " << b << " is " << gcdOfTwoNumber << endl;

    int LCM = (a*b)/gcdFinder(a,b);
    cout << "LCM of " << a << " and " << b << " is " << LCM << endl;
}