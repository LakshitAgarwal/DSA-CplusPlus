#include <iostream>
using namespace std;

int sumOfTwoNumbers(int x, int y){
    int z;
    z = x+y;
    return z;
}

int main(){
    int a,b;
    cout<<"Enter the value for a: ";
    cin>>a;
    cout<<"Enter the value for b: ";
    cin>>b;
    int sum = sumOfTwoNumbers(a,b);
    cout<<"The sum of these two numbers is: "<< sum<<endl;
}