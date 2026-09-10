//2. Accept amount in US dollar and return its corresponding value in Indian currency.
//Consider 1$ as 70 rupees.
//Output is:
// Input : 10
// Output : 700
// Input : 3
// Output : 210
// Input : 1200
// Output : 84000

#include <iostream>
using namespace std;

int DollarToINR(int iNo)
{
    int iAns = 0;
    int iCnt = 0;

    while (iCnt < iNo)
    {
        iAns = iAns + 70;
        iCnt++;
    }

    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout << "Enter number of USD: ";
    cin >> iValue;

    iRet = DollarToINR(iValue);

    cout << "Value in INR is " << iRet;

    return 0;
}