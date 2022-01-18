#include <iostream>

using namespace std;
bool isPrime = 1;
int main()
{
    int n;
    cout << "enter the number" << endl;

    cin >> n;

    for (int i = 2; i < n; i++)
    {
        if (n % i ==0)
        {
            isPrime = 0;
            break;
        }
    }

    if (isPrime == 0)
    {
        cout << "Not a prime number" << endl;
    }
    else
    {
        cout << "is a Prime number" << endl;
    }
}