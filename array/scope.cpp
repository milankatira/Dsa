#include <iostream>

using namespace std;

void update(int arr[], int n)
{

    cout << endl
         << "printing the array" << endl
         << endl;
    arr[0] = 201;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
        cout<<endl;
    }
    cout << endl
         << "printing Done" << endl
         << endl;
}
int main()
{
    int arr[3] = {3, 5, 8};
    update(arr, 3);
    return 0;
}