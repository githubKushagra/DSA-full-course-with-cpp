#include<bits/stdc++.h>
using namespace std;

int main() {
    int n = 12200727;
    int cnt = 0;

    while(n > 0) {
        cnt++;
        n = n/10;
    }

    cout << "The no. of digits that n has in it is " << cnt << endl;




}