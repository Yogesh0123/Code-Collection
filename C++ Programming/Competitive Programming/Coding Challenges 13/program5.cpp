/*
5.Write a program which accept number from user and return difference between summation of even digits and summation of odd digits.
Input : 2395
Output : -15 (2 - 17)
Input : 1018
Output : 6 (8 - 2)
Input : 8440
Output : 16 (16 - 0)
Input : 5733
Output : -18 (0 - 18)
*/

#include <iostream>
using namespace std;

int CountDiff(int iNo)
{
    int iEvenSum = 0;
    int iOddSum = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (; iNo != 0; iNo = iNo / 10)
    {
        int iDigit = iNo % 10;

        if (iDigit % 2 == 0)
        {
            iEvenSum += iDigit;
        }
        else
        {
            iOddSum += iDigit;
        }
    }

    return iEvenSum - iOddSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout << "Enter Number : ";
    cin >> iValue;

    iRet = CountDiff(iValue);

    cout << iRet;

    return 0;
}