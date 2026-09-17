/*
2. Write a program which accept range from user and display all even numbers in
between that range.
Input : 23 35
Output : 24 26 28 30 32 34
Input : 10 18
Output : 10 12 14 16 18
Input : 10 10
Output : 10
Input : -10 2
Output : -10 -8 -6 -4 -2 0 2
Input : 90 18
Output : Invalid range
*/

#include <iostream>
using namespace std;

void RangeDisplayEven(int iStart, int iEnd)
{
    if (iStart > iEnd)
    {
        cout << "Invalid Range";
        return;
    }

    if (iStart % 2 != 0)
    {
        iStart++;
    }

    for (int i = iStart; i <= iEnd; i += 2)
    {
        cout << i << "\t";
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    cout << "Enter starting point: ";
    cin >> iValue1;

    cout << "Enter ending point: ";
    cin >> iValue2;

    RangeDisplayEven(iValue1, iValue2);

    return 0;
}