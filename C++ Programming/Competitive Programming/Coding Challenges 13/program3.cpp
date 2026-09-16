/*
3.Write a program which accept number from user and return the count of digits in
between 3 and 7.

Input : 2395
Output : 1

Input : 1018
Output : 0

Input : 4521
Output : 2

Input : 9922
Output : 0
*/

#include <iostream>
using namespace std;

int CountRange(int iNo)
{
    int iCount = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (; iNo != 0; iNo = iNo / 10)
    {
        int iDigit = iNo % 10;

        if (iDigit == 4 || iDigit == 5 || iDigit == 6)
        {
            iCount++;
        }
    }

    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout << "Enter number: ";
    cin >> iValue;

    iRet = CountRange(iValue);

    cout << "Count of digits between 3 and 7 is: " << iRet;

    return 0;
}