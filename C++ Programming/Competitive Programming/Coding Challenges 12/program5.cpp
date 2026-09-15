/*
5. Write a program which accept area in square feet and convert it into square meter.
(1 square feet = 0.0929 Square meter)
Input : 5
Output : 0.464500
Input : 7
Output : 0.650300
*/

#include <iostream>
using namespace std;

double SquareMeter(int iValue)
{
    double dAns = 0.0;

    for (int i = 1; i <= iValue; i++)
    {
        dAns = dAns + 0.0929;
    }

    return dAns;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    cout << "Enter area in square feet : ";
    cin >> iValue;

    dRet = SquareMeter(iValue);

    cout << "Area in square meter is : " << dRet;

    return 0;
}