// 3.Write a program to find factorial of given number.
// Input : 5
// Output : 120 (5 * 4 * 3 * 2 * 1)
// Input : -5
// Output : 120 (5 * 4 * 3 * 2 * 1)
// Input : 4
// Output : 24 (4 * 3 * 2 * 1)

#include <iostream>
using namespace std;

int Factorial(int iNo)
{
    int iFact = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (int i = 1; i <= iNo; i++)
    {
        iFact = iFact * i;
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout << "Enter number: ";
    cin >> iValue;

    if (iValue < 0)
    {
        iValue = -iValue;
    }

    iRet = Factorial(iValue);

    cout << "Factorial of number is : " << iRet << " (";

    for (int i = iValue; i >= 1; i--)
    {
        cout << i;

        if (i != 1)
        {
            cout << " * ";
        }
    }

    cout << ")";

    return 0;
}