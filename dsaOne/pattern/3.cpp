#include <iostream>

using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;

    for (int i = r; i >= 1; i--)
    {
        for (int j = 1; j <=i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}