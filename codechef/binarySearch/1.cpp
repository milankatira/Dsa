#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v = {1, 3, 4, 7, 2, 9};
    sort(v.begin(), v.end());

    int target = 5;

    int s = 0, e = 6;
    int flag = 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (v[mid] == target)
        {
            flag = 0;
            cout << "yes" << endl;
            break;
        }
        else if (v[mid] < target)
        {

            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    if (flag)
        cout << "no";
    return 0;
}