// Question is to print reverse of an array

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {10, 12, 23, 14, 78, 99, 7, 5, 43, 2, 34, 56, 32};
//     int size = 13;
//     int end = size-1;
//     int start = 0;
//     while (end>=start)
//     {
//         cout<<arr[end]<<" ";
//         end--;
//     }
    
// }


// Using Swap Function
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10, 12, 23, 14, 78, 99, 7, 5, 43, 2, 34, 56, 32};
    int size = 13;
    int start = 0;
    int end = size-1;
    while (end>=start)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    
}