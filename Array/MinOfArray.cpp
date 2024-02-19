// Question is to find the minimum element present in an array

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10, 12, 23, 14, 78, 99, 7, 5, 43, 2, 34, 56, 67};
    int min = INT_MAX; // INT_MAX is a predefined constant in c++ which means the Largest possible number.
    int size = 13;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << min << endl;
}