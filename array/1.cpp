#include <iostream>

using namespace std;

void Arrays(int arr[], int size)
{
    cout << "printing the array" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " " ;

    }
    cout <<endl<< "printing Done" << endl<<endl; 
}

int main()
{
    int number[15];

    Arrays(number, 15);

    int second[3] = {1, 2, 3};
    Arrays(second, 3);

    int third[15] = {2, 3};

    Arrays(third, 15);



    int Size=sizeof(third)/sizeof(int);
    cout<<"size of array --> "<<Size;
}