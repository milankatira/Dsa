#include <iostream>

using namespace std;

void reverse(int arr[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArr(int arr[], int size)
{
    cout << "printing the array" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " " ;

    }
    cout <<endl<< "printing Done" << endl<<endl; 
};

int main()
{
    int arr[6] = {2, 3, 4, 6, 8, 33};
    int brr[5] = {2, 3, 21, 234, 33};
    reverse(arr, 6);
    reverse(brr, 5);

    printArr(arr, 6);
    printArr(brr, 5);
    return 0;
}