// Question is to print extreme values of an array

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10, 12, 23, 14, 78, 99, 7, 5, 43, 2, 34, 56, 32};
    int size = 13;
    int start = 0;
    int end = size - 1;
    while (end >= start)

        // Odd no. of elements ka matter suljhana padega
        if (start == end)
        {
            cout << arr[start] << " ";
            break;
        }
        else
        {
            cout << arr[start] << " ";
            cout << arr[end] << " ";
            start++;
            end--;
        }
}