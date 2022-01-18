#include <iostream>

using namespace std;

int main()
{
    cout<<"enter the number-"<<endl;
    int n ;
    cin>>n;

    int a = 0;
    int b = 1;
    cout << a << " " << b << " ";
    for (int i = 1; i <= n; i++)
    {
        int c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
}