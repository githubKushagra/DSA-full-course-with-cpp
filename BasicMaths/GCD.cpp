#include<bits/stdc++.h>
using namespace std;

int main() {
    int n = 12;
    int m = 20;

    int minOfTwo = min(n , m);

    for(int i=minOfTwo ; i > 0 ; i--) {
        if(n % i == 0 && m % i == 0) {
            cout << "GCD of " << n << " and " << m << " is " << i << endl;
            break;
        }
    }
}