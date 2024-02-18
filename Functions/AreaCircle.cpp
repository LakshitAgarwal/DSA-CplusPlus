// Q1.) Function to calculate area of a circle:

#include <iostream>
using namespace std;

float areaCircle(float a)
{
    float area = M_PI * a * a;
    return area;
}

int main()
{
    float r;
    cout << "Enter the value of radius: ";
    cin >> r;
    if (r <= 0)
    {
        cout << "Invalid Radius!!!" << endl;
    }
    else
    {
        float area = areaCircle(r);
        cout << "Area of circle is: " << area << endl;
    }
}
