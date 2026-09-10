// 5. Write a program which returns difference between Even factorial and odd factorial of given number.
// Input : 5
// Output : -7 (8 - 15)
// Input : -5
// Output : -7 (8 - 15)
// Input : 10
// Output : 2895 (3840 - 945)

#include <iostream>
using namespace std;

int FactorialDiff(int iNo)
{
    int iEvenFact = 1;
    int iOddFact = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (int i = 2; i <= iNo; i += 2)
    {
        iEvenFact = iEvenFact * i;
    }

    for (int i = 1; i <= iNo; i += 2)
    {
        iOddFact = iOddFact * i;
    }

    return iEvenFact - iOddFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout << "Enter number: ";
    cin >> iValue;

    iRet = FactorialDiff(iValue);

    cout << "Factorial difference is " << iRet;

    return 0;
}