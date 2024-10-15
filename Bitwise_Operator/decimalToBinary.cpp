#include <bits/stdc++.h>
using namespace std;

int decimalToBinary(int n) {
    int ansInBinary = 0;
    int place = 1; // This represents the current place value (1, 10, 100, ...)

    while (n > 0) {
        int lastBit = n & 1; // Get the last bit of the number
        ansInBinary += lastBit * place; // Add it to the result at the correct place value
        place *= 10; // Move to the next place value (1, 10, 100, ...)
        n = n >> 1; // Right shift n to process the next bit
    }

    return ansInBinary;
}

int main() {
    int n;
    cin >> n;

    int resultInBinary = decimalToBinary(n);
    cout << resultInBinary << endl;
}
