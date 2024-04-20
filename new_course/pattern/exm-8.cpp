//     1
//    232
//   34543
//  4567654
// 567898765

#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    int number = 1;

    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= rows - i; ++j) {
            cout << " ";
        }
        // Inner loop for printing numbers in ascending order
        for (int k = 1; k <= i; ++k) {
            cout << number++;
        }
        // Decrement number for the next part of the row
        number -= 2;
        // Inner loop for printing numbers in descending order
        for (int l = 1; l < i; ++l) {
            cout << number--;
        }
        // Increment number for the next row
        number += 2;
        // Move to the next line after printing numbers in each row
        cout << endl;
    }

    return 0;
}
