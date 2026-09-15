/*
4. Write a program which accept temperature in Fahrenheit and convert it into celsius.
(1 celsius = (Fahrenheit -32) * (5/9))
Input : 10
Output : -12.222222
Input : 34
Output : 1.111111
*/

#include <iostream>
using namespace std;

double FhtoCs(float fTemp)
{
    double dTemp = fTemp - 32;
    double dCelsius = dTemp * 5.0 / 9.0;

    return dCelsius;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    cout << "Enter temperature in Fahrenheit: ";
    cin >> fValue;

    dRet = FhtoCs(fValue);

    cout << "Temperature in Celsius is : " << dRet;

    return 0;
}