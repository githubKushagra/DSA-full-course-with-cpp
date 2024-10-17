#include <bits/stdc++.h>
using namespace std;


int factorial(int x) {
    if (x == 0) return 1;

    int fact = 1;
    for(int i=2 ; i<=x ; i++) {
        fact = fact * i;
    }
    return fact;
}


int find_nCr(int n , int r) {
    
    int numerator = factorial(n);
    int denominator = factorial(r) * factorial(n - r);

    int ans = numerator / denominator;
    return ans;
}


int main() {
    int n , r;
    cin >> n >> r;

    int ans = find_nCr(n , r);
    cout << ans << endl;
}