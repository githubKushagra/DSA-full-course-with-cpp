#include<bits/stdc++.h>
using namespace std;

int main() {
    // if we are having only lowercase characters in the string
    string s;
    cin >> s;

    // pre compute
    int hash[26] = {0};     // size has taken 26 because we know that string is containing only lowercase letters and if it is not specify then we have to take 256 as size of hash array
    for(int i=0;i<s.size();i++) {
        hash[s[i] - 'a']++;
    }
    // pre compute end

    int q;
    cin >> q;
    while(q--) {
        char ch;
        cin >> ch;

        if(hash[ch - 'a'] > 0) {
            cout << "Yes character is present and frequency is " << hash[ch - 'a'] << endl;
        }
        else {
            cout << "No character is not present" << endl;
        }
    }
}