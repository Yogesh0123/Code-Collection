/*
2.Write a program which accept number from user and check whether it contains 0
in it or not.
Input : 2395
Output : There is no Zero
Input : 1018
Output : It Contains Zero
Input : 9000
Output : It Contains Zero
Input : 10687
Output : It Contains Zero
*/

#include <iostream>
using namespace std;

bool ChkZero(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (; iNo != 0; iNo = iNo / 10)
    {
        if (iNo % 10 == 0)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout << "Enter number: ";
    cin >> iValue;

    bRet = ChkZero(iValue);

    if (bRet == true)
    {
        cout << "It Contains Zero";
    }
    else
    {
        cout << "There is no Zero";
    }

    return 0;
}