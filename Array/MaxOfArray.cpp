// Question is to find the maximum element present in an array

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 78, 99, 7, 5, 43, 2, 34, 56, 67};
    int max = INT_MIN; // INT_MIN is a predefined constant in c++ which means the smallest possible number.
    int size = 13;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << max << endl;
}