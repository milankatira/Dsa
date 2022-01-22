#include <iostream>

using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    int mid = start + (end-start)/2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        };
        mid = start + (end-start)/2;
    }

    return -1;
}
int main()
{
    int even[6] = {1, 5, 8, 12, 55, 44};
    int odd[5] = {1, 5, 6, 7, 5};

    int index = binarySearch(even, 6, 55);
    int oddIndex=binarySearch(odd, 5, 5);

    cout << "index is " << index << endl;
    cout << "index is " << oddIndex << endl;

    return 0;
}