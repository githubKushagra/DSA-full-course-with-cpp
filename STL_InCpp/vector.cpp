#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v1;
    v1.push_back(1);
    v1.emplace_back(2);
    cout << v1.front() << endl;
    cout << v1.back() << endl;

    // v1.pop_back();

    vector<int> v2(v1); // copying vector 1 to vector 2.
    cout << "Size : " << v2.size();
    cout << "\nCapacity : " << v2.capacity();
    cout << "\nMax_Size : " << v2.max_size();

    // checks if the vector is empty or not
    if (v2.empty() == false)
        cout << "\nVector is not empty";
    else
        cout << "\nVector is empty";


    // AND



    vector<int> g1;

    for (int i = 1; i <= 10; i++)
        g1.push_back(i * 10);

    cout << "\nReference operator [g] : g1[2] = " << g1[2];

    cout << "\nat : g1.at(4) = " << g1.at(4);

    cout << "\nfront() : g1.front() = " << g1.front();

    cout << "\nback() : g1.back() = " << g1.back();

    // pointer to the first element
    int *pos = g1.data();

    cout << "\nThe first element is " << *pos << endl;


    // iterator

    vector<int>::iterator it = v2.begin();         // .begin() is pointing to the first element's address
    // cout << it << endl;
    cout << *(it) << endl;
    it++;    // means jumped to the next address
    // v1.erase(it);
    cout << *(it) << endl;


    // insert


    vector<int> v(2 , 100);
    for(auto i : v) {
        cout << i << " ";
    }
    cout << endl;

    v.insert(v.begin() , 10);  // at starting place 10
    for(auto i : v) {
        cout << i << " ";
    }
    cout << endl;

    vector<int> vt(5 , 36);
    cout << "before swapping v and vt vector" << endl;

    for(auto i : v) {
        cout << i << " ";
    }
    cout << endl;
    for(auto i : vt) {
        cout << i << " ";
    }
    cout << endl;

    v.swap(vt);
    cout << "after swapping v and vt vector" << endl;

    for(auto i : v) {
        cout << i << " ";
    }
    cout << endl;
    for(auto i : vt) {
        cout << i << " ";
    }
    cout << endl;

}