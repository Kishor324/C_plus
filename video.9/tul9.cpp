// #include<iostream>

// using namespace std;

     // cout <<" this is the tutorial 9"

#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // -------- Example 1: if-else --------
    if (number > 0) {
        cout << "Number is positive." << endl;
    } 
    else if (number < 0) {
        cout << "Number is negative." << endl;
    } 
    else {
        cout << "Number is zero." << endl;
    }

    // -------- Example 2: switch-case --------
    int day;
    cout << "\nEnter day number (1-7): ";
    cin >> day;

    switch (day) {
        case 1: cout << "Sunday"; break;
        case 2: cout << "Monday"; break;
        case 3: cout << "Tuesday"; break;
        case 4: cout << "Wednesday"; break;
        case 5: cout << "Thursday"; break;
        case 6: cout << "Friday"; break;
        case 7: cout << "Saturday"; break;
        default: cout << "Invalid day number!"; // runs if no case matches
    }
    cout << endl;

    return 0;
}


    