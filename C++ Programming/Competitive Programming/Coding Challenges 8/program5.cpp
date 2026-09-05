//5.Write a program which accept number from user and return difference between summation of all its factors and non factors.
//Input : 12
//Output : -34 (16 - 50)
//Input : 10
//Output : -29 (8 - 37)

#include <iostream>
using namespace std;

int FactDiff(int iNo)
{
    int i = 1;
    int iFactSum = 0;
    int iNonFactSum = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (i < iNo)
    {
        int iResult = iNo % i;

        if (iResult == 0)
        {
            iFactSum = iFactSum + i;
        }

        if (iResult != 0)
        {
            iNonFactSum = iNonFactSum + i;
        }

        i++;
    }

    return (iFactSum - iNonFactSum);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout << "Enter number ";
    cin >> iValue;

    iRet = FactDiff(iValue);

    cout << iRet;

    return 0;
}