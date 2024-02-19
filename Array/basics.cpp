#include <iostream>
using namespace std;

int main()
{

    // initialising an array;
    int arr[10];

    // taking input of values in array from user
    cout << "Enter the values for array" << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    // printing the values entered
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
}