// question is to count the number of 0's and 1's in an array containing only 0's and 1's.

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 1, 1, 0, 1, 0, 1, 0};
    int size = 8;
    int zeros = 0;
    int ones = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 1)
        {
            ones += 1;
        }
        else if (arr[i] == 0)
        {
            zeros += 1;
        }
    }
    cout << "No. of zeros are: " << zeros << endl;
    cout << "No. of ones are: " << ones << endl;
}