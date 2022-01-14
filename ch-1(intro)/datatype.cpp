#include <iostream>

using namespace std;

int main()
{
    // int
    int a = 123;

    cout << "a = " << a << endl;

    //char
    //char return only one character

    char b = 'k';
    cout << "b = " << b << endl;

    //bool

    bool c = true;
    cout << "c = " << c << endl;

    //float
    float f = 1.23;
    cout << "f = " << f << endl;

    //double
    double d = 1.233;
    cout << "d = " << d << endl;

    int sa = sizeof(a);
    cout << "size of a = " << sa << endl;

    int sb = sizeof(b);
    cout << "size of b = " << sb << endl;

    int sc = sizeof(c);
    cout << "size of c = " << sc << endl;

    int sf = sizeof(f);
    cout << "size of f = " << sf << endl;

    int sd = sizeof(d);
    cout << "size of a = " << sd << endl;
}