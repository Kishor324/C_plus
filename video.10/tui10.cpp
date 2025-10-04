#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a number for loops: ";
    cin >> n;

    // -------- While loop --------
    cout << "\nWhile Loop:" << endl;
    int i = 1;
    while (i <= n) {
        cout << i << " ";
        i++;
    }
    cout << endl;

    // -------- Do-While loop --------
    cout << "\nDo-While Loop:" << endl;
    int j = 1;
    do {
        cout << j << " ";
        j++;
    } while (j <= n);
    cout << endl;

    // -------- For loop --------
    cout << "\nFor Loop:" << endl;
    for (int k = 1; k <= n; k++) {
        cout << k << " ";
    }
    cout << endl;

    return 0;
}
