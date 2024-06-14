#include<bits/stdc++.h>
using namespace std;

// functions are used to increase readability
// functions are set of codes which perform something for u
// functions are used to modularise the code
// functions are used to use the same code again and again(multiple times)
// Types of functions - 
// 1. void -> it will not return anything
// 2. non-void(declared using data types) -> it will return something based on the code
// 3. parameterised(void and non-void)
// 3. non-parameterised(void and non-void)


// void
void printName() {
    cout << "Kushagra Varshney" << endl;
}

// non-void
string printName2() {
    return "Kushagra Varshney"; 
}

// non-void parameterised
int sumOfTwoNumber(int a , int b) {
    int result = a + b;
    return result;
}


// void parameterised
void printName3(string name) {
    cout << name << endl;
}


// callByValue function
void passByValue(int x) {
    cout << x << endl;
    x += 5;
    cout << x << endl;
}


// callByReference
void passByReference(int &y) {
    cout << y << endl;
    y += 5;
    cout << y << endl;
}

int main() {
    printName();
    string name = printName2();
    cout << name << endl;

    int a = 18;
    int b = 19;
    int sum = sumOfTwoNumber(a , b);
    cout << sum << endl;


    string myName = "Kushagra Varshney";
    printName3(myName);


    // callByValue - in this, the copy of the variable will pass to function and changes will not reflect to original value of the variable
    cout << "Implementing callByValue function" << endl;
    int x = 10;
    passByValue(x);
    cout << x << endl; // x will still be 10


    // callByReference - in this, the address of the variable will pass to function and changes will reflect to original value of the variable
    cout << "Implementing callByReference function" << endl;
    int y = 10;
    passByReference(y);
    cout << y << endl; // y will be 15


    // note - arrays always pass by reference , we do not have to add & inside the function parameter

}