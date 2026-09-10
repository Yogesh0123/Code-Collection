//Q1.Write a program which accept number from user and display below pattern.
// Input : 5
// Output : * * * * * # # # # #
// Input : 6
// Output : * * * * * * # # # # # # #
// Input : -5
// Output : * * * * * # # # # #
// Input : 2
// Output : * * # #

#include <iostream>
using namespace std;

void Display(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (int iCnt = 1; iCnt <= iNo * 2; iCnt++)
    {
        if (iCnt <= iNo)
        {
            cout << "*\t";
        }
        else
        {
            cout << "#\t";
        }
    }
}

int main()
{
    int iValue = 0;

    cout << "Enter Number: ";
    cin >> iValue;

    Display(iValue);

    return 0;
}