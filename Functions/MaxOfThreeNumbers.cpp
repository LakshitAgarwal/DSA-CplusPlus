#include <iostream>
using namespace std;

int maxOfThree(int x, int y, int z){
    int m= max(x,y);
    int n = max(m,z);
    return n;
}

int main(){
    int a,b,c;
    cout<<"Enter the value for a: ";
    cin>>a;
    cout<<"Enter the value for b: ";
    cin>>b;
    cout<<"Enter the value for c: ";
    cin>>c;
    int max = maxOfThree(a,b,c);
    cout<<"Maximum of these numbers is: "<<max<<endl;
    return 0;
}