/*
4.Write a program which accept range from user and return addition of all even
numbers in between that range. (Range should contains positive numbers only)
Input : 23 30
Output : 108
Input : 10 18
Output : 70
Input : -10 2
Output : Invalid range
Input : 90 18
Output : Invalid range
*/

#include <iostream>
using namespace std;

int RangeSumEven(int iStart, int iEnd)
{
    int iSum = 0;

    if ((iStart < 0) || (iEnd < 0) || (iStart > iEnd))
    {
        return -1;
    }

    if (iStart % 2 != 0)
    {
        iStart++;
    }

    while (iStart <= iEnd)
    {
        iSum = iSum + iStart;
        iStart = iStart + 2;
    }

    return iSum;
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

    iRet = RangeSumEven(iValue1, iValue2);

    if (iRet == -1)
    {
        cout << "Invalid Range";
    }
    else
    {
        cout << "Addition is: " << iRet;
    }

    return 0;
}