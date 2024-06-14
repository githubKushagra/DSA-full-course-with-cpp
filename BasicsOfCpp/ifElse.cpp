#include<bits/stdc++.h>

using namespace std;

int main() {
    int age;
    cout << "Enter your age : ";
    cin >> age;

    if(age >= 18) {
        cout << "You are eligible to vote." << endl;
    }
    else {
        cout << "You are not eligible to vote." << endl;
    }
    // remember one thing - if statement can run without else statement but not vice versa

    return 0;
}