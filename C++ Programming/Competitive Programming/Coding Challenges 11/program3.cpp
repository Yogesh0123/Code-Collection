// 3.Write a program to find even factorial of given number.
// Input : 5
// Output : 8 (4 * 2)
// Input : -5
// Output : 8 (4 * 2)
// Input : 10
// Output : 3840 (10 * 8 * 6 * 4 * 2)

#include <iostream>
using namespace std;

int EvenFactorial(int iNo)
{
    int iFact = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (int i = 2; i <= iNo; i += 2)
    {
        iFact = iFact * i;
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout << "Enter number";
    cin >> iValue;

    iRet = EvenFactorial(iValue);

    cout << "Even Factorial of number is " << iRet;

    return 0;
}