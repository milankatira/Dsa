#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v;

    cout << v.size() << endl;     //0
    cout << v.capacity() << endl; //0

    v.push_back(1);

    cout << v.size() << endl;     //1
    cout << v.capacity() << endl; //1

    v.push_back(2);

    cout << v.size() << endl;     //2
    cout << v.capacity() << endl; //2

    v.push_back(3);

    cout << v.size() << endl;     //3
    cout << v.capacity() << endl; //4
    return 0;
}