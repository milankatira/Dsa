#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int row = 1;
    char ch = 'A';
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {

            char ch1 = row + 'A' + col -2 ;
            cout << ch1
                 << " ";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}