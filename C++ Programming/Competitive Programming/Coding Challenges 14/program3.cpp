/*
3. Write a program which accept range from user and return addition of all numbers in between that range. (Range should contains positive numbers only)
Input : 23 30
Output : 212
Input : 10 18
Output : 126
Input : -10 2
Output : Invalid range
Input : 90 18
Output : Invalid range
*/

#include <iostream>
using namespace std;

int RangeSum(int iStart, int iEnd)
{
    if ((iStart < 0) || (iEnd < 0) || (iStart > iEnd))
    {
        return -1;
    }

    int iSumStart = (iStart * (iStart - 1)) / 2;
    int iSumEnd = (iEnd * (iEnd + 1)) / 2;

    return iSumEnd - iSumStart;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    cout << "Enter starting point : ";
    cin >> iValue1;

    cout << "Enter ending point : ";
    cin >> iValue2;

    iRet = RangeSum(iValue1, iValue2);

    if (iRet == -1)
    {
        cout << "Invalid Range";
    }
    else
    {
        cout << "Addition is : " << iRet;
    }

    return 0;
}