#include<bits/stdc++.h>
using namespace std;

int main() {
    int n = 12200727;
    int revNum = 0;

    while(n > 0) {
        int lastDigit = n%10;
        n = n/10;
        revNum = revNum*10 + lastDigit;
    }

    cout << "The reverse of the number n is " << revNum << endl;
}