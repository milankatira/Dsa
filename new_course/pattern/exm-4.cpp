//     *
//    ***
//   *****
//  *******
// *********

#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    // Outer loop for the number of rows
    for (int i = 1; i <= rows; ++i)
    {
        // Inner loop for printing spaces
        for (int j = 1; j <= rows - i; ++j)
        {
            cout << " ";
        }
        // Inner loop for printing '*' in each row
        for (int k = 1; k <= 2 * i - 1; ++k)
        {
            cout << "*";
        }
        // Move to the next line after printing all '*' in the row
        cout << endl;
    }

    return 0;
}
