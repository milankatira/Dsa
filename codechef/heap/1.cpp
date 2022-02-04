#include <bits/stdc++.h>

using namespace std;

void delete_(vector<int> &v, int &i)
{
    swap(v[1], v[i]);
    i--;
    int temp = 1;
    while ((temp * 2 <= i) && (temp * 2 + 1 <= i))
    {
        if (v[temp * 2] > v[temp * 2 + 1] && v[temp * 2] > v[temp])
        {
            swap(v[temp * 2], v[temp]);
            temp = temp * 2;
        }
    }
}

void insert_(vector<int> &v, int i, int val)
{
    i++;
    v[i] = val;
    int temp = i;
    while (temp / 2 > 0 && v[temp / 2] < v[i])
    {
        swap(v[temp], v[temp / 2]);
        temp /= 2;
    }
}
int main()
{
    vector<int> v(1000);
    int i = 0;
}