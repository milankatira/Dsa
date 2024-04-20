// 54321
// 5432
// 543
// 54
// 5

#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    // Outer loop for the number of rows
    for (int i = 1; i <= rows; ++i) {
        // Inner loop for printing numbers in descending order
        for (int j = rows; j >= i; --j) {
            cout << j;
        }
        // Move to the next line after printing numbers in each row
        cout << endl;
    }

    return 0;
}
