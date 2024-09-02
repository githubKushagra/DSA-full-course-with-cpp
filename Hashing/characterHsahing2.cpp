#include<bits/stdc++.h>
using namespace std;



int main() {
    string s;
    getline(cin , s);

    // pre compute
    int hash[256] = {0};     // size has taken 256 because we know that string is containing both lowercase letters as well as uppercase letters.
    for(int i=0;i<s.size();i++) {
        hash[s[i]]++;
    }
    // pre compute end


    int q;
    cin >> q;
    

    while(q--) {
        char ch;
        cin >> ch;

        if(hash[ch] > 0) {
            cout << "Yes character is present and frequency is " << hash[ch] << endl;
        }
        else {
            cout << "No character is not present" << endl;
        }
    }
}