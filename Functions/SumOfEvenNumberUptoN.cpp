#include <iostream>
using namespace std;

int sumOfEven(int a){
    int flag = 0;
    for(int i=0; i<=a; i++){
        if(i%2==0){
            flag = flag+i;
        }
    }
    return flag;
}

int main(){
    int n;
    cout<<"Enter the value for n: ";
    cin>>n;
    int sum = sumOfEven(n);
    cout<<"Sum of even numbers upto "<<n<<" is: "<<sum<<endl;
}

