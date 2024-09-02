#include<bits/stdc++.h>
using namespace std;

void sum1(int i , int sum) {
    if(i < 1) {
        cout << sum << endl;
        return;
    }
    sum1(i - 1 , sum + i);
}


int sum2(int n) {
    if(n == 1) {
        return 1;
    }

    return n + sum2(n - 1);
}

int main() {
    int n;
    cin >> n;
    int sum = 0;
    sum1(n , sum);


    // another way
    int sumFromOneToN = sum2(n);
    cout << "Sum from 1 to n is " << sumFromOneToN << endl;
}