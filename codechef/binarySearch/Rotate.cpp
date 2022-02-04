#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v = {5, 6, 7, 8, 9, 10, 1, 2, 3, 4};
    sort(v.begin(), v.end());

    int target = 5;

    int s = 0, e = 10;
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
        else if (v[mid] >= v[0])
        {

            if (target < v[0] || target > v[mid])
                s = mid + 1;
            else
                e = mid - 1;
        }
        else
        {
            if (target >= v[0] || target < v[mid])
                e = mid - 1;

            else
                s = mid + 1;
        }
    }


















    
    if (flag)
        cout << "no";
    return 0;
}