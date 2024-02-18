// Q1.) Function to calculate Factorial:

#include <iostream>
using namespace std;

int fact(int a){
    int flag =1;
    for(int i=a; i>=1; i--){
        flag = flag*i;
    }
    return flag;
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int fac = fact(n);
    cout<<"Factorial of the entered number is: "<<fac<<endl;
}
