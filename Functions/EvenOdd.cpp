// Q1.) Function to find number is even or odd using boolean:

#include <iostream>
using namespace std;

bool isEven(int a){
    if(a%2==0){
        return true;
    }else{
        return false;
    }
}

int main()
{
    int n;
    cout<<"Enter the value for n: ";
    cin>>n;
    if(isEven(n)==true){
        cout<<"Even"<<endl;
    }else{
        cout<<"Odd"<<endl;
    }
}
