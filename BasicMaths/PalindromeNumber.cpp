#include<bits/stdc++.h>
using namespace std;

int main() {
    int n = 12200727;
    int num = n;
    int revNum = 0;

    while(n > 0) {
        int lastDigit = n%10;
        n = n/10;
        revNum = revNum*10 + lastDigit;
    }

    if(revNum == num) {
        cout << "The number is a palindrome." << endl;
    }
    else {
        cout << "The number is not a palindrome." << endl;
    }
    
    return 0;
}