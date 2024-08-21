#include<bits/stdc++.h>
using namespace std;

int main() {
    int n = 41;

    // 1st way

    int cnt = 0;
    for(int i=1;i<=n;i++) {
        if(n%i == 0) {
            cnt++;
        }
    }

    if(cnt == 2) {
        cout << "Prime" << endl;
    }
    else {
        cout << "Not Prime" << endl;
    }


    // 2nd way

    int cnt2 = 0;
    for(int i=2;i<=n/2;i++) {
        if(n%i == 0) {
            cnt2++;
        }
    }

    if(cnt2 == 0) {
        cout << "Prime" << endl;
    }
    else {
        cout << "Not Prime" << endl;
    }

    return 0;
}