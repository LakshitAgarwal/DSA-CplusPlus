#include <iostream>
using namespace std;
int main()
{
    int arr[500];
    cout << "Enter the number of elements you want to enter in array: ";
    int n;
    cin >> n;
    cout << "Enter the elements in the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the value you want to change other values to: ";
    int p;
    cin >> p;
    for (int i = 0; i < n; i++)
    {
        arr[i] = p;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
        cout << endl;
}