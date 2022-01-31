#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2, 4, 3, 1, 7, 11};

    sort(v.begin(), v.end());

    int s = 0, e = v.size() - 1, t = 10;

    while (s < e)
    {
        int sum = v[s] + v[e];

        if (t == sum)
        {
            cout << "YES";
            break;
        }
        else if (sum > t)
        {
            e--;
        }
        else
        {
            s++;
        }
    }
    return 0;
}
