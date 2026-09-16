/*
2.Write a program which accept number from user and return the count of odd
digits.

Input : 2395
Output : 3

Input : 1018
Output : 2

Input : -1018
Output : 2

Input : 8462
Output : 0
*/

#include <iostream>
using namespace std;

int CountOdd(int iNo)
{
    int iCount = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (; iNo != 0; iNo = iNo / 10)
    {
        int iDigit = iNo % 10;

        if (iDigit % 2 != 0)
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

    cout << "Enter number : ";
    cin >> iValue;

    iRet = CountOdd(iValue);

    cout << "Count of odd digits is : " << iRet;

    return 0;
}