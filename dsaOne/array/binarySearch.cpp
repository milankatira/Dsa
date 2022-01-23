#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key)
{

    int s = 0;
    int e = n;

    while (s <= n)
    {
        int mid = (s + e) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

int main()
{
    int n;
    cout << "enter the size of array" << endl;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the key" << endl;
    cin >> key;

    cout << BinarySearch(arr, n, key) << endl;

    return 0;
}