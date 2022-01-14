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
        while (col <= n)
        {

            char ch1 = row + col - 2 + 'A' ;
            cout << ch1
                 << " ";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}