//Q1.Write a program which accept number from user and display its multiplication of factors.
//Input : 12
//Output : 144 (1 * 2 * 3 * 4 * 6)
//Input : 13
//Output : 1 (1)
//Input : 10
//Output : 10 (1 * 2 * 5)

#include <iostream>
using namespace std;

int MultFact(int iNo)
{
    int i = 1;
    int iMult = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (i <= iNo / 2)
    {
        if (iNo / i * i == iNo)
        {
            iMult = iMult * i;
        }

        i++;
    }

    return iMult;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    cout << "Enter number ";
    cin >> iValue;

    iRet = MultFact(iValue);

    cout << "Output is: " << iRet;

    return 0;
}