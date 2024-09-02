#include<bits/stdc++.h>
using namespace std;

// check for palindrome using recursion

bool isPalindrome(int i , string s , int length) {
    if(i >= length/2) {
        return true;
    }
    if(s[i] != s[length-i-1]) {
        return false;
    }

    return isPalindrome(i + 1 , s , length);
}

int main() {
    string name = "MADMM";
    int len = name.length();
    int i=0;
    bool status = isPalindrome(i , name , len);

    if(status) {
        cout << "True" << endl;
    }
    else {
        cout << "False" << endl;
    }

    return 0;
}