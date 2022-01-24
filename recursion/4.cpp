#include <iostream>

using namespace std;
bool checkPal(string str, int i, int j)
{
    if (i > j)
        return true;

    if (str[i] != str[j])
        return false;
    else
    {
        return checkPal(str, i + 1, j - 1);
    }
}
int main()
{
    string name = "abccba";

    bool isPal = checkPal(name, 0, name.length() - 1);

    if (isPal)
    {
        cout << "Its is a Palindrome" << endl;
    }
    else
    {
        cout << "Its not a Palindrome" << endl;
    }
    cout << endl;
}