#include<bits/stdc++.h>
using namespace std;

int main() {
    pair<int , int> p1;
    p1.first = 19;
    p1.second = 20;
    cout << p1.first << endl << p1.second << endl;

    // AND

    pair<int , int> p2 = {19 , 20};
    cout << p2.first << endl << p2.second << endl;

    // AND

    pair<char , string> p3 = {'K' , "Kushagra"};
    cout << p3.first << endl << p3.second << endl;

    // AND

    pair<int , pair<char , string>> p4 = {19 , {'K' , "Kushagra"}};
    cout << p4.first << endl << p4.second.first << endl << p4.second.second << endl;

    // AND

    pair<int , int> p5[] = {{1,2} , {3,4} , {5,6}};
    cout << p5[0].first << endl << p5[1].second << endl << p5[2].second << endl;


}