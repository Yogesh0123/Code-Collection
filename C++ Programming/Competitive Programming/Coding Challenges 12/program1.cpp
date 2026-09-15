// 1.Write a program which accept radius of circle from user and calculate its area. Consider value of PI as 3.14. (Area = PI * Radius * Radius)
// Input : 5.3
// Output : 88.2026
// Input : 10.4
// Output : 339.6224

#include <iostream>
using namespace std;

double CircleArea(float fRadius)
{
    double dSquare = fRadius * fRadius;
    double dArea = 3.14 * dSquare;

    return dArea;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    cout << "Enter radius: ";
    cin >> fValue;

    dRet = CircleArea(fValue);

    cout << "Area of circle is: " << dRet;

    return 0;
}