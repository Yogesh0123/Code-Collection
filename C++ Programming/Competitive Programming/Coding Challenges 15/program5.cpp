/*
5.Write a program which accept number from user and count frequency of such a
digits which are less than 6.
Input : 2395
Output : 3
Input : 1018
Output : 3
Input : 9440
Output : 3
Input : 96672
Output : 1
*/

#include <iostream>
using namespace std;

int Count(int iNo)
{
    int iCount = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (; iNo != 0; iNo = iNo / 10)
    {
        int iDigit = iNo % 10;

        if (iDigit < 6)
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

    iRet = Count(iValue);

    cout << "Output is : " << iRet;

    return 0;
}