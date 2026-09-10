// 4.Write a program to find odd factorial of given number.
// Input : 5
// Output : 15 (5 * 3 * 1)
// Input : -5
// Output : 15 (5 * 3 * 1)
// Input : 10
// Output : 945 (9 * 7 * 5 * 3 * 1)

#include <iostream>
using namespace std;

int OddFactorial(int iNo)
{
    int iFact = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (int i = 1; i <= iNo; i = i + 2)
    {
        iFact = iFact * i;
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout << "Enter number: ";
    cin >> iValue;

    iRet = OddFactorial(iValue);

    cout << "Odd Factorial of number is " << iRet;

    return 0;
}