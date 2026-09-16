/*
4.Write a program which accept number from user and return multiplication of all
digits.
Input : 2395
Output : 270
Input : 1018
Output : 8
Input : 9440
Output : 144
Input : 922432
Output : 864
*/

#include <iostream>
using namespace std;

int MultDigits(int iNo)
{
    int iMult = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (; iNo != 0; iNo = iNo / 10)
    {
        int iDigit = iNo % 10;

        if (iDigit > 0)
        {
            iMult = iMult * iDigit;
        }
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout << "Enter number: ";
    cin >> iValue;

    iRet = MultDigits(iValue);

    cout << "Output is : " << iRet;

    return 0;
}