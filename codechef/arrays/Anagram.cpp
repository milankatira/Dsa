#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<char, int> count1;
    string s1 = "apple";
    string s2 = "elppa";

    for (int i = 0; i < s1.size(); i++)
        count1[s1[i]]++;
    for (int i = 0; i < s2.size(); i++)
        count1[s2[i]]--;

    int flag = 1;
    for (int i = 'a'; i <= 'z'; i++)
    {
        if (count1[i] != 0)
        {
            flag = 0;
            cout << "NOT ANAGRAM";
            break;
        }
    }
    if (flag)
    {

        cout << "ANAGRAM";
    }
    return 0;
}