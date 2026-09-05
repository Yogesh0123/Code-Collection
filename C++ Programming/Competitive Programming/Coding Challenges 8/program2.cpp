//Q2.Write a program which accept number from user and display its factors in decreasing order.
//Input : 12
//Output : 6 4 3 2 1
//Input : 13
//Output : 1
//Input : 10
//Output : 5 2 1

#include <iostream>
using namespace std;

void FactRev(int iNo)
{
    int i = iNo / 2;

    if (iNo < 0)
    {
        iNo = -iNo;
        i = iNo / 2;
    }

    while (i >= 1)
    {
        if (iNo / i * i == iNo)
        {
            cout << "Output is: " << i << "\t";
        }

        i--;
    }
}

int main()
{
    int iValue = 0;

    cout << "Enter number : ";
    cin >> iValue;

    FactRev(iValue);

    return 0;
}