#include <iostream>

using namespace std;

int main()
{
    int r;
    cin >> r;

    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        int space = 2 * r - 2 * i;

        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    for (int i = r; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        int space = 2 * r - 2 * i;

        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}