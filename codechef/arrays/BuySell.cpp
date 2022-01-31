#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v = {5, 2, 6, 9, 8, 11};

    int max_profit = 0;
    int min_price = INT_MAX;

    for (int i = 0; i < v.size(); i++)
    {
        int current_profit = v[i] - min_price;
        max_profit = max(max_profit, current_profit);
        min_price = min(min_price, v[i]);
    }
    cout << max_profit;
    return 0;
}