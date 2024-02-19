// Question is to take 5 inputs from user in an array and print there doubles.

#include <iostream>
using namespace std;

int main()
{
    int arr[5];

    cout << "Enter the values for array" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    // printing the values entered
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i]*2 << " ";
    }
}