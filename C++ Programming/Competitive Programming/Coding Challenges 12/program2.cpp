// 2. Write a program which accept width & height of rectangle from user and calculate its area. (Area = Width * Height)
// Input : 5.3 9.78
// Output : 51.834

#include <iostream>
#include <iomanip>
using namespace std;

double ReactArea(float RectangleArea1, float RectangleArea2)
{
    double dProduct = RectangleArea1 * RectangleArea2;
    return dProduct;
}

int main()
{
    float fValue1 = 0.0f;
    float fValue2 = 0.0f;
    double dRet = 0.0;

    cout << "Enter width: ";
    cin >> fValue1;

    cout << "Enter height: ";
    cin >> fValue2;

    dRet = ReactArea(fValue1, fValue2);

    cout << fixed << setprecision(3);
    cout << "Area is :" << dRet;

    return 0;
}