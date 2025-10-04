#include<iostream>
#include <iomanip>
using namespace std;
int main(){
    // 1) const parameters (can’t modify inside the function)
    // if once we declear the value of any function neither be cnage in during whole program.


    // manuplater in c++
    // int a=33, b=455, c=5;
    // cout<<"the value of a without setw is "<<a<<endl;
    // cout<<"the value of b without setw is "<<b<<endl;
    // cout<<"the value of cwithout setw is "<<c<<endl;


    // cout<<"the value of a is "<< setw(4)<<a<<endl;
    // cout<<"the value of b is "<< setw(4)<<b<<endl;
    // cout<<"the value of c is "<< setw(4)<<c<<endl;

    #include <iostream>
using namespace std;

// int main() {
    int a = 10, b = 5, c = 2;

    // Example 1: * has higher precedence than +
    int result1 = a + b * c;   // = 10 + (5 * 2) = 20
    cout << "a + b * c = " << result1 << endl;

    // Example 2: () changes precedence
    int result2 = (a + b) * c; // = (10 + 5) * 2 = 30
    cout << "(a + b) * c = " << result2 << endl;

    // Example 3: / and * have same precedence, associativity is left-to-right
    int result3 = a / b * c;   // = (10 / 5) * 2 = 4
    cout << "a / b * c = " << result3 << endl;

    // Example 4: = has lower precedence than +
    int x;
    x = a + b;   // actually: x = (a + b) not (x = a) + b
    cout << "x = a + b = " << x << endl;

    // Example 5: Logical AND (&&) has higher precedence than OR (||)
    bool res = (a > b) || (b > c && a > c);
    // Equivalent to: (a > b) || ((b > c) && (a > c))
    cout << "Logical precedence result = " << res << endl;
// in gernally the precedence of are explain as badmas rule for me saral garnu jastai ho
    return 0;
}


