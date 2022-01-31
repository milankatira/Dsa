#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<char, int> count1;
    string s1 = "apple";
    string s2 = "elapp";

    for (int i = 0; i < s1.size(); i++)
        count1[s1[i] - 'a']++;
    for (int i = 0; i < s2.size(); i++)
        count1[s2[i] - 'a']--;

    int flag = 1;
    for (int i = 0; i < 26; i++)
    {
        if (count1[i] != 0)
        {
            flag = 0;
            cout << "NOT ANAGRAM";
            break;
        }
    }
    if (flag)
        cout << "ANAGRAM";
    return 0;
}