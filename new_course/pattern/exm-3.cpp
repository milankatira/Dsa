//     *
//    **
//   ***
//  ****
// *****

#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; ++i)
    {
        // for printing spaces
        for (int j = 1; j <= rows - i; ++j)
        {
            cout << " ";
        }

        // for printing starts spaces
        for (int k = 1; k <= i; ++k)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
