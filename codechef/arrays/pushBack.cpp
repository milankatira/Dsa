#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(2);

    int size = v.size();
    for (int i = 0; i < size; i++)
    {
        v.push_back(v[i]);
    }
    cout << v.size() << endl;     //6
    cout << v.capacity() << endl; //8

    return 0;
};
