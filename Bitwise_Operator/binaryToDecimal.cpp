#include <bits/stdc++.h>
using namespace std;

int BinaryToDecimal(int n) {
    int ansInDecimal = 0;
    int i = 0;

    while (n != 0) {
        int lastDigit = n % 10;

        if(lastDigit == 1) {
            ansInDecimal = ansInDecimal + pow(2 , i);
        }
        i++;
        n /= 10;
    }

    return ansInDecimal;
    
}

int main() {
    int n;
    cin >> n;

    int resultInDecimal = BinaryToDecimal(n);
    cout << resultInDecimal << endl;
}
