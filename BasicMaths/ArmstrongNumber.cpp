#include<bits/stdc++.h>
using namespace std;

int main() {
    int n = 1634;
    int num = n;
    string str = to_string(n);
    int lengthOfTheNumber = str.length();
    int sum = 0;


    while(n > 0) {
        int lastDigit = n%10;
        n = n/10;
        sum += pow(lastDigit , lengthOfTheNumber);
    }

    if(sum == num) {
        cout << "Armstrong Number" << endl;
    }
    else {
        cout << "Not an Armstrong Number" << endl;
    }

    return 0;
}