//Q4.Write a program which accept number from user and return summation of all its non factors.
//Input : 12
//Output : 50
//Input : 10
//Output : 37

#include <iostream>
using namespace std;

int SumNonFact(int iNo)
{
    int i = 1;
    int iSum = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (i <= iNo)
    {
        if (iNo % i == 0)
        {
            i++;
            continue;
        }

        iSum = iSum + i;
        i++;
    }

    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout << "Enter Number : ";
    cin >> iValue;

    iRet = SumNonFact(iValue);

    cout << "Output is : " << iRet;

    return 0;
}