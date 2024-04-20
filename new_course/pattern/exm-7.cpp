// A
// BB
// CCC
// DDDD
// EEEEE


#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    // ASCII value for 'A' is 65
    int asciiValue = 65;

    // Outer loop for the number of rows
    for (int i = 1; i <= rows; ++i) {
        // Inner loop for printing characters 'i' times
        for (int j = 1; j <= i; ++j) {
            cout << char(asciiValue);
        }
        // Increment ASCII value for the next row
        ++asciiValue;
        // Move to the next line after printing characters in each row
        cout << endl;
    }

    return 0;
}
